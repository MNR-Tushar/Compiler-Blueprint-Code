#include <bits/stdc++.h>
using namespace std;

int main() {
    string expr;
    cout << "Enter an arithmetic expression (example: 2 + 3 * 4): ";
    getline(cin, expr);

    // Replace all variables for simplicity; we only handle constants
    // Use stringstream and evaluate using stack
    stack<int> s;
    stack<char> ops;

    auto precedence = [](char op){
        if(op=='+' || op=='-') return 1;
        if(op=='*' || op=='/') return 2;
        return 0;
    };

    auto applyOp = [](int a,int b,char op){
        switch(op){
            case '+': return a+b;
            case '-': return a-b;
            case '*': return a*b;
            case '/': return a/b;
        }
        return 0;
    };

    istringstream ss(expr);
    int num;
    char c;
    while(ss >> ws){
        if(ss.peek() >= '0' && ss.peek() <= '9'){
            ss >> num;
            s.push(num);
        } else {
            ss >> c;
            while(!ops.empty() && precedence(ops.top()) >= precedence(c)){
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                char op = ops.top(); ops.pop();
                s.push(applyOp(a,b,op));
            }
            ops.push(c);
        }
    }

    while(!ops.empty()){
        int b = s.top(); s.pop();
        int a = s.top(); s.pop();
        char op = ops.top(); ops.pop();
        s.push(applyOp(a,b,op));
    }

    cout << "Result after constant folding: " << s.top() << endl;
    return 0;
}
