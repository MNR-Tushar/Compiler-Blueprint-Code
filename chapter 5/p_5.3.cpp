#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter binary string: ";
    cin >> s;

    int count0 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        else if (c != '1') {
            cout << "Invalid input\n";
            return 0;
        }
    }

    if (count0 % 2 == 0)
        cout << "Accepted (even number of 0s)\n";
    else
        cout << "Rejected\n";
}
