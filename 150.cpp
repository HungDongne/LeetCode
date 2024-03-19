#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    Solution() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (tokens[i] == "+") {
                    st.push(a + b);
                } else if (tokens[i] == "-") {
                    st.push(a - b);
                } else if (tokens[i] == "*") {
                    st.push(a * b);
                } else if (tokens[i] == "/") {
                    st.push(a / b);
                }
            } else {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};