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
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        ll sum = 0;
        sort(capacity.rbegin(), capacity.rend());
        for (const auto i : apple) sum += 0LL + i;
        int i = 1;
        for (; i <= capacity.size(); i++) {
            sum -= capacity[i - 1];
            if (sum <= 0) break;
        }
        return i;
    }
};