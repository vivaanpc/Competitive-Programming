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
	int maximizeSquareHoleArea(int n, int m, vector<int>& row, vector<int>& col) {
		sort(row.begin(), row.end());
		sort(col.begin(), col.end());
		auto longCont = [&](vector<int>& bars) {
			int ans = 1, cont = 1;
			for (int i = 1; i < bars.size(); i++) {
				if (bars[i] - bars[i - 1] == 1) cont++;
				else cont = 1;
				ans = max(ans, cont);
			}
			return ++ans;
		};

		int s = min(longCont(row), longCont(col));
		return s * s;
	}
};
