#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of basic blocks: ";
    cin >> n;
    cin.ignore();

    vector<vector<int>> adj(n);
    vector<string> blocks(n);
    map<string,int> labels;

    // Input blocks and detect labels
    for(int i=0;i<n;i++){
        cout << "Enter Block " << i+1 << " statements (semicolon separated, type END to finish):\n";
        string block="", line;
        while(true){
            getline(cin,line);
            if(line=="END") break;
            block += line + ";";
            if(line.find(':')!=string::npos){
                string label = line.substr(0,line.find(':'));
                labels[label] = i;
            }
        }
        blocks[i] = block;
    }

    // Build adjacency
    for(int i=0;i<n;i++){
        string blk = blocks[i];
        if(blk.find("goto")!=string::npos){
            string tgt = blk.substr(blk.find("goto")+5);
            tgt.erase(remove(tgt.begin(), tgt.end(), ';'), tgt.end());
            tgt.erase(remove(tgt.begin(), tgt.end(), ' '), tgt.end());
            adj[i].push_back(labels[tgt]);
        }
        if(blk.find("if")!=string::npos && blk.find("goto")!=string::npos){
            string tgt = blk.substr(blk.find("goto")+5);
            tgt.erase(remove(tgt.begin(), tgt.end(), ';'), tgt.end());
            tgt.erase(remove(tgt.begin(), tgt.end(), ' '), tgt.end());
            adj[i].push_back(labels[tgt]);
        }
        if(blk.find("goto")==string::npos && i+1<n) adj[i].push_back(i+1);
    }

    // Print CFG
    cout << "Flow Graph (Adjacency List):\n";
    for(int i=0;i<n;i++){
        cout << "Block " << i+1 << " -> ";
        if(adj[i].empty()) cout << "(end)";
        else {
            for(int j=0;j<adj[i].size();j++){
                cout << "Block " << adj[i][j]+1;
                if(j!=adj[i].size()-1) cout << " , ";
            }
        }
        cout << endl;
    }

    return 0;
}
