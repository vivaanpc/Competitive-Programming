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
    long long minimumCost(string s, string t, int flipCost, int swapCost, int crossCost) {
        ll ans = 0;
        int msa = 0, msb = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '0' && t[i] == '1') msa++;
            if (s[i] == '1' && t[i] == '0') msb++;
        }
        if (msa + msb == 0) return 0;
        int p = min(msa, msb);
        ans += 1LL * p * min(0LL + swapCost , 2LL * flipCost);
        int r = abs (msa - msb);
        ans += r / 2LL * min(2LL * flipCost, 0LL + swapCost + crossCost);
        ans += 1LL * (r % 2) * flipCost;
        return ans;
    }
};