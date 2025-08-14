#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int len = s.size();
    if (len >= 1 && s[len - 1] == 'a') {
        cout << "Accepted (ends with a or aa)\n";
    } else {
        cout << "Rejected\n";
    }
}
