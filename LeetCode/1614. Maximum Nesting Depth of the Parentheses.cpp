#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int maxDepth(string s) {
		stack<char> st;
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				st.push(s[i]);
			} else if (s[i] == ')') {
				st.pop();
			}
			ans = std::max(ans, int(st.size()));
		}
		return ans;
	}
};