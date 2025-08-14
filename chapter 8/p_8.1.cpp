#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Production {
    char lhs;
    string rhs;
};

// Function to generate LR(0) items
void generateLR0Items(vector<Production> grammar) {
    cout << "LR(0) Items:\n";
    for(auto prod : grammar) {
        for(int i = 0; i <= prod.rhs.length(); i++) {
            string item = prod.rhs;
            item.insert(i, 1, '•');  // insert dot at position i
            cout << prod.lhs << " -> " << item << endl;
        }
    }
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

    generateLR0Items(grammar);

    return 0;
}
