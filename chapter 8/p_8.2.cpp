#include <bits/stdc++.h>
using namespace std;

struct Production {
    char lhs;
    string rhs;
};

struct Item {
    char lhs;
    string rhs;
    int dot; // position of dot
};

vector<Item> closure(vector<Item> I, vector<Production> grammar) {
    vector<Item> C = I;
    bool added = true;

    while(added) {
        added = false;
        for(auto it : C) {
            if(it.dot < it.rhs.size() && isupper(it.rhs[it.dot])) {
                char B = it.rhs[it.dot];
                for(auto prod : grammar) {
                    if(prod.lhs == B) {
                        Item newItem = {B, prod.rhs, 0};
                        if(find(C.begin(), C.end(), newItem) == C.end()) {
                            C.push_back(newItem);
                            added = true;
                        }
                    }
                }
            }
        }
    }
    return C;
}

bool operator==(const Item &a, const Item &b) {
    return (a.lhs == b.lhs && a.rhs == b.rhs && a.dot == b.dot);
}

vector<Item> goTo(vector<Item> I, char X, vector<Production> grammar) {
    vector<Item> J;
    for(auto it : I) {
        if(it.dot < it.rhs.size() && it.rhs[it.dot] == X)
            J.push_back({it.lhs, it.rhs, it.dot+1});
    }
    return closure(J, grammar);
}

int main() {
    int n;
    cout << "Enter number of productions: ";
    cin >> n;
    vector<Production> grammar(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter LHS and RHS of production " << i+1 << " (example A aB): ";
        cin >> grammar[i].lhs >> grammar[i].rhs;
    }

    vector<Item> I0 = closure({{grammar[0].lhs, grammar[0].rhs, 0}}, grammar);
    cout << "Initial Closure (I0):\n";
    for(auto it : I0)
        cout << it.lhs << " -> " << it.rhs.substr(0,it.dot) << "•" << it.rhs.substr(it.dot) << endl;

    return 0;
}
