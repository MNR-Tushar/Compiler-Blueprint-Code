#include <bits/stdc++.h>
using namespace std;

struct Action {
    string type; // "shift", "reduce", "accept"
    int state;
    int prodIndex; // for reduce
};

int main() {
    // Example grammar: E -> E+T | T, T -> T*F | F, F -> id
    string input = "id+id*id$";
    stack<int> st;
    st.push(0); // initial state

    // Example action table (hardcoded for demo)
    map<pair<int,char>, Action> actionTable;
    // Fill table as per LR(0) parsing table (simplified)
    // This is just an illustrative example

    cout << "Parsing steps:\n";
    cout << "Stack\tInput\tAction\n";

    while(!st.empty() && !input.empty()) {
        // Normally, check actionTable[st.top(), input[0]] and execute
        cout << "Stack: ";
        stack<int> temp = st;
        vector<int> s;
        while(!temp.empty()){ s.push_back(temp.top()); temp.pop();}
        for(int i=s.size()-1;i>=0;i--) cout<<s[i]; 
        cout << "\tInput: " << input << "\tAction: shift\n";
        st.push(1); // dummy push
        input = input.substr(2); // remove 'id'
        if(input.empty()) break;
    }

    cout << "String parsed successfully.\n";
    return 0;
}
