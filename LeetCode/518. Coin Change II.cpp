#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = INT_MAX;
class Solution {
public:
	int change(int k, vector<int>& v) {
		int n = v.size();
		vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
		for (int i = 0; i <= n; ++i) {
			dp[i][0] = 1;
		}
		for (int i = 1; i <= k; ++i) {
			dp[0][i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= k; j++) {
				if (v[i - 1] <= j) {
					dp[i][j] = (dp[i - 1][j] + dp[i][j - v[i - 1]]) % mod;
				} else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}
		return (int)dp[n][k];
	}
};