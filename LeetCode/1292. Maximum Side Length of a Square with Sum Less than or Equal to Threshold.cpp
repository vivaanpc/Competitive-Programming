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
	int maxSideLength(vector<vector<int>>& mat, int t) {
		int n = mat.size();
		int m = mat[0].size();
		vector<vector<ll>> v(n, vector<ll> (m, 0));
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (j == 0) {
					v[i][j] = mat[i][j];
				} else {
					v[i][j] = mat[i][j] + v[i][j - 1];
				}
			}
		}
		auto check = [&] (int i, int j, int k, int t, bool & flag) {
			ll ans = 0;
			for (int a = 0; a <= k; a++) {
				ans += v[i + a][j + k] - v[i + a][j] + mat[i + a][j];
				if (ans > t) {
					flag = false;
					return;
				}
			}
			//flag remains true
		};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int k = 0;
				bool flag = true;
				while (flag && (i + k < n) && (k + j < m)) {
					check(i, j, k, t, flag);
					if (flag) ans = max(ans, k + 1);
					k++;
				}

			}
		}

		return ans;
	}
};