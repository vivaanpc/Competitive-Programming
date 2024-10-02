#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    string s;
    cin >> s;
    stack<char> st;
    int replace = 0;
    bool impossible = false;
    for (auto ch : s) {
        if (ch == '(' || ch == '[' || ch == '{' || ch == '<') {
            st.push(ch);
        } else {
            if (st.empty()) {
                impossible = true;
                break;
            }
            char top = st.top();
            st.pop();
            if ((top == '(' && ch != ')') || (top == '[' && ch != ']') || (top == '{' && ch != '}') || (top == '<' && ch != '>')) {
                replace++;
            }
        }
    }
    if (!st.empty() || impossible) {
        cout << "Impossible" << endl;
    } else {
        cout << replace  << endl;
    }

    return 0;
}