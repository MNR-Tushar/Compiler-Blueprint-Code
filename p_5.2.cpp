#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    int state = 0; // q0
    for (char c : s) {
        if (state == 0) state = (c == '0') ? 1 : 0;
        else if (state == 1) state = (c == '0') ? 1 : 2;
        else if (state == 2) state = (c == '0') ? 1 : 0;
    }

    if (state == 2)
        cout << "Accepted (ends with 01)\n";
    else
        cout << "Rejected\n";
}
