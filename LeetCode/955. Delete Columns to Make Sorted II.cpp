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
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size(), m = strs[0].size();
        int ans = 0;
        vector<bool> sorted(n - 1, false);
        for (int j = 0; j < m; j++) {
            bool bad = false;
            for (int i = 0; i < n - 1; i++) {
                if (!sorted[i] && strs[i][j] > strs[i + 1][j]) {
                    bad = true;
                    break;
                }
            }
            if (bad) {
                ans++;
                continue;
            }
            for (int i = 0; i < n - 1; i++) {
                if (!sorted[i] && strs[i][j] < strs[i + 1][j]) {
                    sorted[i] = true;
                }
            }
        }
        return ans;
    }
};
