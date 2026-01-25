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
	int minimumDifference(vector<int>& v, int k) {
		sort(v.begin(), v.end(), greater<int>());
		int mini = INT_MAX;
		for (int i = 0, j = k - 1; i <= v.size() - k; i++, j++) {
			mini = min(mini, v[i] - v[j]);
		}
		return mini;
	}
};