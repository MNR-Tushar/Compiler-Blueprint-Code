#include <bits/stdc++.h>
using namespace std;

int main() {
    int states, symbols;
    cout << "Enter number of states: ";
    cin >> states;
    cout << "Enter number of symbols: ";
    cin >> symbols;

    vector<vector<int>> table(states, vector<int>(symbols));
    cout << "Enter transition table (rows=states, cols=symbols):\n";
    for (int i = 0; i < states; i++)
        for (int j = 0; j < symbols; j++)
            cin >> table[i][j];

    int startState;
    cout << "Enter start state: ";
    cin >> startState;

    int acceptCount;
    cout << "Enter number of accept states: ";
    cin >> acceptCount;
    vector<int> acceptStates(acceptCount);
    cout << "Enter accept states: ";
    for (int i = 0; i < acceptCount; i++) cin >> acceptStates[i];

    string input;
    cout << "Enter input string (symbols as 0,1,...): ";
    cin >> input;

    int current = startState;
    for (char c : input) {
        int sym = c - '0';
        current = table[current][sym];
    }

    if (find(acceptStates.begin(), acceptStates.end(), current) != acceptStates.end())
        cout << "Accepted\n";
    else
        cout << "Rejected\n";
}
