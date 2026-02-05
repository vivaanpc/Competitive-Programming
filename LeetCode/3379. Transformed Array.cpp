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
    vector<int> constructTransformedArray(vector<int>& v) {
        int n = v.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) ans[i] = v[i];
            if (v[i] > 0) {
                ans[i] = v[(i + v[i]) % n];
            }
            if (v[i] < 0) {
                ans[i] = v[((i + v[i]) % n + n) % n];
            }
        }
        return ans;
    }
};