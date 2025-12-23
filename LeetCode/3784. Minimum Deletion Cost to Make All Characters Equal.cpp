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
    long long minCost(string s, vector<int>& cost) {
        ll sum = 0;
        ll ans = LONG_LONG_MAX;
        bool isSame = true;
        map<char, ll> mp;
        for (int i = 0; i < s.length(); i++) {
            if (i > 0 && s[i] != s[i - 1]) isSame = false;
            sum += cost[i];
            mp[s[i]] += 0LL + cost[i];
        }
        if (isSame) return 0;
        for (auto& [x, y] : mp) {
            ans = min (0LL + ans, 0LL + sum - y);
        }
        return ans;
    }
};