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
    int maximumSum(vector<int>& v) {
        int ans = 0;
        sort(v.begin(), v.end(), greater<int>());
        map<int, vector<int>> mp;
        for (auto i : v) {
            mp[i % 3].push_back(i);
        }
        if (mp.count(0) && mp[0].size() >= 3) {
            ans = max (ans, mp[0][0] + mp[0][1] + mp[0][2]);
        }
        if (mp.count(1) && mp[1].size() >= 3) {
            ans = max (ans, mp[1][0] + mp[1][1] + mp[1][2]);
        }
        if (mp.count(2) && mp[2].size() >= 3) {
            ans = max (ans, mp[2][0] + mp[2][1] + mp[2][2]);
        }
        if (mp.count(0) && mp.count(1) && mp.count(2)) {
            ans = max(ans, mp[0][0] + mp[1][0] + mp[2][0]);
        }
        return ans;
    }
};