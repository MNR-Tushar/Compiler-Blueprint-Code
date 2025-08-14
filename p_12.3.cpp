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

    map<string,string> copyMap;

    cout << "Code after copy propagation:\n";
    for(auto stmt : code){
        string lhs = stmt.substr(0, stmt.find('='));
        lhs.erase(remove(lhs.begin(), lhs.end(), ' '), lhs.end());
        string rhs = stmt.substr(stmt.find('=')+1);
        rhs.erase(remove(rhs.begin(), rhs.end(), ' '), rhs.end());

        // Propagate copies
        for(auto &p : copyMap){
            size_t pos;
            while((pos = rhs.find(p.first)) != string::npos)
                rhs.replace(pos, p.first.length(), p.second);
        }

        cout << lhs << " = " << rhs << endl;

        // If RHS is a single variable, record the copy
        if(rhs.size() == 1 && isalpha(rhs[0]))
            copyMap[lhs] = rhs;
    }

    return 0;
}
