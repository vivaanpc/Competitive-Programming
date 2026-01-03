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
    int numOfWays(int n) {
        vector<vector<ll>> dp(n, vector<ll> (2, 0));
        dp[0][0] = dp[0][1] = 6;
        for (int i = 1; i < n; i++) {
            dp[i][1] = ((dp[i - 1][0] * 2) % mod + (dp[i - 1][1] * 2) % mod) % mod;
            dp[i][0] = ((dp[i - 1][0] % mod * 3) % mod + (dp[i - 1][1] % mod * 2) % mod) % mod;
        }
        return (dp[n - 1][0] % mod + dp[n - 1][1] % mod) % mod;
    }
};