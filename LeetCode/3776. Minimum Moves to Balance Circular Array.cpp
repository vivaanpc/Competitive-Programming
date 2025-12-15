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
    long long minMoves(vector<int>& balance) {
        ll ans = 0;
        int n = balance.size();
        if (*min_element(balance.begin(), balance.end()) >= 0) {
            return 0;
        }
        if (accumulate(balance.begin(), balance.end(), 0LL) < 0) {
            return -1;
        }
        int idx = min_element(balance.begin(), balance.end()) - balance.begin();
        map<int, vector<int>> mp;
        for (int i = 0; i < balance.size(); i++) {
            if (i == idx) {
                continue;
            }
            int temp = min({abs(i - idx), abs(n + idx - i), abs(n - idx + i)});
            mp[temp].push_back(i);
        }
        for (auto &[x, y] : mp) {
            if (balance[idx] >= 0) break;
            for (int i = 0; i < y.size(); i++) {
                if (balance[idx] >= 0) break;
                if (abs(balance[idx]) > balance[y[i]]) {
                    ans += 0LL + (1LL * x * balance[y[i]]);
                    balance[idx] += balance[y[i]];
                } else {
                    ans += 0LL + abs(1LL * balance[idx] * x);
                    balance[idx] = 0;
                }
            }
        }
        return ans;
    }
};