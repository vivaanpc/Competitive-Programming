#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    int coinChange(vector<int>& v, int amount) {
        int k = amount;
        vector<ll> dp(k + 1, INT_MAX);
        dp[0] = 0;
        for (const auto& x : v) {
            for (int i = 0; i <= k; i++) {
                if (0LL + i + x <= k) {
                    dp[i + x] = min(dp[i + x], dp[i] + 1LL);
                }
            }
        }
        return (dp[k] == INT_MAX ? -1 : dp[k]);
    }
};