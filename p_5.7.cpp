#include <bits/stdc++.h>
using namespace std;

int main() {
    int nfaStates, symbols;
    cout << "Enter NFA states: ";
    cin >> nfaStates;
    cout << "Enter number of symbols: ";
    cin >> symbols;

    vector<vector<vector<int>>> nfa(nfaStates, vector<vector<int>>(symbols));
    for (int i = 0; i < nfaStates; i++) {
        for (int j = 0; j < symbols; j++) {
            int k;
            cout << "Number of transitions from state " << i << " on symbol " << j << ": ";
            cin >> k;
            cout << "Enter " << k << " states: ";
            for (int t = 0; t < k; t++) {
                int st; cin >> st;
                nfa[i][j].push_back(st);
            }
        }
    }

    set<set<int>> dfaStates;
    queue<set<int>> q;
    set<int> start = {0};
    q.push(start);
    dfaStates.insert(start);

    cout << "\nDFA Transition Table:\n";
    map<set<int>, int> stateId;
    stateId[start] = 0;
    int idCounter = 1;

    while (!q.empty()) {
        auto cur = q.front(); q.pop();
        cout << "DFA state {";
        for (int x : cur) cout << x << " ";
        cout << "} -> ";

        for (int sym = 0; sym < symbols; sym++) {
            set<int> next;
            for (int st : cur)
                for (int ns : nfa[st][sym])
                    next.insert(ns);
            if (!next.empty() && !dfaStates.count(next)) {
                dfaStates.insert(next);
                stateId[next] = idCounter++;
                q.push(next);
            }
            cout << "{";
            for (int x : next) cout << x << " ";
            cout << "}  ";
        }
        cout << "\n";
    }
}
