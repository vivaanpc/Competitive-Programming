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
	int minimumDeleteSum(string s1, string s2) {
		vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
		for (int i = 0; i < s1.size(); i++) {
			for (int j = 0; j < s2.size(); j++) {
				if (s1[i] == s2[j])
					dp[i + 1][j + 1] = dp[i][j] + s1[i];
				else
					dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		}
		ll sum = 0;
		for (char &c : s1) sum += c;
		for (char &c : s2) sum += c;
		return sum - 2 * dp[s1.size()][s2.size()];
	}
};