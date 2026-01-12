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
	int minTimeToVisitAllPoints(vector<vector<int>>& points) {
		int ans = 0;
		for (int i = 0; i < points.size() - 1; i++) {
			int curx = points[i][0];
			int cury = points[i][1];

			int x = points[i + 1][0];
			int y = points[i + 1][1];

			ans += max(abs(x - curx), abs(y - cury));
		}
		return ans;
	}
};