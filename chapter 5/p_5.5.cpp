#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (s.size() >= 1 && s[0] == 'a') {
        bool ok = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != 'b') { ok = false; break; }
        }
        if (ok) { cout << "Accepted\n"; return 0; }
    }
    cout << "Rejected\n";
}
