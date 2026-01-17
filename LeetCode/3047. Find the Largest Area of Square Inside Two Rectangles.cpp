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
	long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
		int n = bottomLeft.size();
		ll ans = 0;
		for (int i = 0; i < n - 1; i++) {
			int bl = bottomLeft[i][0], br = bottomLeft[i][1], tl = topRight[i][0], tr = topRight[i][1];
			for (int j = i + 1; j < n; j++) {
				int a = bottomLeft[j][0], b = bottomLeft[j][1], c = topRight[j][0], d = topRight[j][1];
				ll width = min(c, tl) - max(a, bl);
				ll height = min(d, tr) - max(b, br);
				ll s = min(width, height);
				ans = max(ans, s);
			}
		}
		return ans * ans;
	}
};