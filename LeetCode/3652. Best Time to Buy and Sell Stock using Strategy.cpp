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
class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        vector<ll>pref(n), v(n);
        pref[0] = prices[0] * strategy[0];
        v[0] = prices[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + prices[i] * strategy[i];
            v[i] = v[i - 1] + prices[i];
        }
        if (k == n) {
            return max(v[n - 1] - v[k / 2 - 1], pref[n - 1]);
        }
        ll ans = pref[n - 1];
        int left = 0;
        // ll temp = 0;
        // debug(ans, temp);
        ll temp = pref[n - 1] - pref[k - 1] + ( - v[k / 2 - 1] + v[k - 1]);
        debug(pref[n - 1], pref[k - 1], v[k / 2 - 1], v[k - 1]);
        // debug(pref[n - 1], pref[k - 1]);
        debug(ans, temp);
        ans = max(ans, temp);
        left++;
        while (left + k <= n) {
            temp = pref[n - 1] - pref[left + k - 1] + (left > 0 ? pref[left - 1] : 0);
            debug(pref[n - 1], pref[left + k - 1], pref[left - 1]);
            temp += v[left + k - 1] - v[left + k / 2 - 1];
            debug(temp);
            ans = max(ans, temp);
            left++;
        }
        // debug(left);
        return ans;
    }
};
int main() {
    Solution soln;
    int k = 2;
    vector<int> prices = {4, 2, 8};
    vector<int> strategy = { -1, 0, 1};
    cout << soln.maxProfit(prices, strategy, k);
}