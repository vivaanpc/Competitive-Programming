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
	int maximizeSquareArea(int m, int n, vector<int>& row, vector<int>& col) {
		row.push_back(1);
		col.push_back(1);
		row.push_back(m);
		col.push_back(n);
		set<int> seen;
		ll ans = 0;
		for (int i = 0; i < row.size(); i++) {
			for (int j = i + 1; j < row.size(); j++) {
				seen.insert(abs(row[j] - row[i]));
			}
		}
		for (int i = 0; i < col.size(); i++) {
			for (int j = i + 1; j < col.size(); j++) {
				ll val = abs(col[j] - col[i]);
				if (seen.count(val)) {
					ans = max(ans, val);
				}
			}
		}
		if (ans == 0) {
			return -1;
		}
		return (1LL * ans * ans) % mod;
	}
};