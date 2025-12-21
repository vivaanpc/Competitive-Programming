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
class Solution {
public:
    long long maximumScore(vector<int>& v, string s) {
        ll count = 0;
        ll ans = 0;
        multiset<int> ms;
        for (int i = 0; i < v.size(); i++) {
            ms.insert(v[i]);
            if (s[i] == '1') {
                ans += 0LL + *(ms.rbegin() + 1);
                ms.erase(ms.find(ms.rbegin()));
            }
        }
        return ans;
    }
};