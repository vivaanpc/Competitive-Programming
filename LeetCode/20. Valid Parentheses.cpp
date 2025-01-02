#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		if (s.size() % 2 != 0) {
			return false;
		}
		bool ans;
		stack<char> st;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
				st.push(s[i]);
			} else {
				if (st.size() == 0) return false;
				if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')) {
					st.pop();
				} else {
					return false;
				}
			}
		}
		if (st.size() == 0) {
			ans = true;
		} else {
			ans = false;
		}
		return ans;
	}
};
int main() {
	string s;
	cin >> s;
	Solution soln;
	bool check = soln.isValid(s);
	cout << check;
}