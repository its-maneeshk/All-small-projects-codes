// ifEven = -1, balanced = 0 else 1
#include<iostream>
#include<stack>
using namespace std;

int validParenthesis(string expr) {
    if (expr.length() % 2 == 1) return -1;
    stack<char> st;
    for (char ch : expr) {
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if (!st.empty() && ((st.top() == '(' && ch == ')') || 
                                (st.top() == '[' && ch == ']') || 
                                (st.top() == '{' && ch == '}'))) {
                st.pop();
            } else {
                return 1;
            }
        }
    }
    return st.empty() ? 0 : 1;
}


int main() {
    string expression;
    cin >> expression;
    int res = validParenthesis(expression);
    cout<<res<<endl;
    return 0;
    
}