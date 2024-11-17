#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	vector<int> asteroidCollision(vector<int>& v) {
		stack<int> st;
		for (int i = 0; i < v.size(); i++) {
			if (st.size() == 0) {
				st.push(v[i]);
				continue;
			}
			if ((st.top() < 0 && v[i] < 0) || (st.top() > 0 && v[i] > 0) || (st.top() < 0 && v[i] > 0))  {
				st.push(v[i]);
				continue;
			}
			while (st.size() && (st.top() > 0 && v[i] < 0)) {
				if (st.top() > abs(v[i])) {
					break;
				} else if (st.top() == abs(v[i])) {
					st.pop();
					break;
				} else {
					st.pop();
				}
				if (st.size() == 0) {
					st.push(v[i]);
					break;
				} else if (st.top() < 0) {
					st.push(v[i]);
					break;
				}
			}
		}
		v.clear();
		v.resize(st.size());
		for (int i = st.size() - 1; i >= 0; i--) {
			v[i] = st.top();
			st.pop();
		}
		return v;
	}
};
int main() {
	Solution soln;
	vector<int> v = {1, -2, -2, -2};
	v = soln.asteroidCollision(v);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}