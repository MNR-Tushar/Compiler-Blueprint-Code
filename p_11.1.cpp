#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> code;
    string line;
    cout << "Enter program statements (type 'END' to stop):\n";
    while(true){
        getline(cin, line);
        if(line == "END") break;
        code.push_back(line);
    }

    set<int> leaders;
    map<string,int> labels; // map label -> line index

    // First pass: record label positions
    for(int i=0;i<code.size();i++){
        if(code[i].find(':') != string::npos){
            string label = code[i].substr(0, code[i].find(':'));
            labels[label] = i;
        }
    }

    // Step 1: first statement is leader
    leaders.insert(0);

    // Step 2: find leaders based on goto/if
    for(int i=0;i<code.size();i++){
        string stmt = code[i];
        if(stmt.find("goto") != string::npos){
            string tgt = stmt.substr(stmt.find("goto")+5);
            tgt.erase(remove(tgt.begin(), tgt.end(), ' '), tgt.end());
            leaders.insert(labels[tgt]);
            if(i+1<code.size()) leaders.insert(i+1);
        }
        else if(stmt.find("if") != string::npos && stmt.find("goto") != string::npos){
            string tgt = stmt.substr(stmt.find("goto")+5);
            tgt.erase(remove(tgt.begin(), tgt.end(), ' '), tgt.end());
            leaders.insert(labels[tgt]);
            if(i+1<code.size()) leaders.insert(i+1);
        }
    }

    // Display Leaders
    cout << "Leaders :\n";
    for(auto l : leaders) cout << l+1 << ": " << code[l] << endl;

    // Basic Blocks
    cout << "Basic Blocks :\n";
    vector<int> leaderList(leaders.begin(), leaders.end());
    sort(leaderList.begin(), leaderList.end());
    for(int i=0;i<leaderList.size();i++){
        int start = leaderList[i];
        int end = (i+1<leaderList.size()) ? leaderList[i+1]-1 : code.size()-1;
        cout << "Block " << i+1 << ":\n";
        for(int j=start;j<=end;j++)
            cout << code[j] << endl;
        cout << endl;
    }

    return 0;
}
