#include<bits/stdc++.h>
//vivaanpc
using namespace std;
// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
	vector<vector<int>> minimumAbsDifference(vector<int>& v) {
		vector<pair<int, int>> pr;
		sort(v.begin(), v.end());
		int mini = INT_MAX;
		for (int i = 0; i < v.size() - 1; i++) {
			if (abs(v[i] - v[i + 1]) <= mini ) {
				if (abs(v[i] - v[i + 1]) < mini) {
					pr.clear();
					mini = abs(v[i] - v[i + 1]);
					pr.push_back({v[i], v[i + 1]});
				} else {
					pr.push_back({v[i], v[i + 1]});
				}
			}
		}
		vector<vector<int>> ans;
		for (int i = 0; i < pr.size(); i++) {
			ans.push_back({pr[i].first, pr[i].second});
		}
		return ans;
	}
};