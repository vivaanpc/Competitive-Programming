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
		vector<vector<int>> ans;
		int mini = INT_MAX;
		for (int i = 0; i < v.size() - 1; i++) {
			if (v[i + 1] - v[i] <= mini ) {
				if (v[i + 1] - v[i] < mini) {
					ans.clear();
					mini = v[i + 1] - v[i];
					ans.push_back({v[i], v[i + 1]});
				} else {
					ans.push_back({v[i], v[i + 1]});
				}
			}
		}
		return ans;
	}
};