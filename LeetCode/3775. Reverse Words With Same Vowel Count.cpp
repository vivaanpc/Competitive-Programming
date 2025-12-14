#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        int i = 0, firstWord = 0;
        for (; i < s.length(); i++) {
            if (char(s[i]) == ' ') break;
            temp += s[i];
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                firstWord++;
            }
        }
        if (i == s.length()) {
            return s;
        }
        i++;
        ans += temp;
        ans += " ";
        temp = "";
        stack<char> st;
        int count = 0;
        for (; i < s.length(); i++) {
            if (char(s[i]) == ' ') {
                if (count == firstWord) {
                    while (st.size() != 0) {
                        ans += st.top();
                        st.pop();
                    }
                    ans += " ";
                } else {
                    ans += temp;
                    ans += " ";
                    while (st.size() != 0) {
                        st.pop();
                    }
                }
                temp = "";
                count = 0;
                continue;
            }
            temp += s[i];
            st.push(s[i]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                count++;
            }
        }
        if (count == firstWord) {
            while (st.size() != 0) {
                ans += st.top();
                st.pop();
            }
        } else {
            ans += temp;
        }
        return ans;
    }
};