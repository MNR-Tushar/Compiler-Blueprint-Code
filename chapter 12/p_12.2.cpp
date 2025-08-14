#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> code;
    string line;
    cout << "Enter statements (type END to stop):\n";
    while(true){
        getline(cin, line);
        if(line=="END") break;
        code.push_back(line);
    }

    map<string,bool> used;

    // Pass 1: detect variables used
    for(int i=code.size()-1;i>=0;i--){
        string stmt = code[i];
        for(auto &c : stmt){
            if(isalpha(c)) used[string(1,c)] = true;
        }
    }

    cout << "Dead code statements:\n";
    for(int i=0;i<code.size();i++){
        string stmt = code[i];
        string var = stmt.substr(0, stmt.find('='));
        var.erase(remove(var.begin(), var.end(), ' '), var.end());
        if(used.find(var) == used.end() || !used[var])
            cout << code[i] << endl;
    }

    return 0;
}
