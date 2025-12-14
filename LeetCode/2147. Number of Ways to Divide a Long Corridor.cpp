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
    const int mod = 1e9 + 7;
    int numberOfWays(string s) {
        vector<int> pos;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'S') {
                pos.push_back(i);
            }
        }
        if ((pos.size() % 2 == 1) || (pos.size() == 0)) {
            return 0;
        }
        int n = pos.size();
        pos.resize(n);
        ll res = 1;
        for (int i = 2; i < n; i += 2) {
            int gap = pos[i] - pos[i - 1];
            res = (res * (gap % mod)) % mod;
        }
        return (int)res;
    }
};