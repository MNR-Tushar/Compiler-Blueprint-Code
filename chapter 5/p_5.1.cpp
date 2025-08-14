#include <bits/stdc++.h>
using namespace std;

int main() {
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;

    int state = 0; // remainder mod 3
    for (char c : bin) {
        int bit = c - '0';
        state = (state * 2 + bit) % 3;
    }

    if (state == 0)
        cout << "Accepted (divisible by 3)\n";
    else
        cout << "Rejected\n";
}
