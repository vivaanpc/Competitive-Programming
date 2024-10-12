#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            }
            if (s[i] == ')') {
                if (st.size() == 0) {
                    count++;
                } else {
                    st.pop();
                }
            }
        }
        count += st.size();
        return count;
    }
};