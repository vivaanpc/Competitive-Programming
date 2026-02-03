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
    bool isTrionic(vector<int>& v) {
        int cnt = 1;
        if (v[1] <= v[0]) return false;
        for (int i = 2; i < v.size(); i++) {
            if ((v[i] < v[i - 1] && v[i - 1] > v[i - 2]) || (v[i] > v[i - 1] && v[i - 1] < v[i - 2])) {
                cnt++;
            }
            if (v[i] == v[i - 1]) return false;
        }
        return cnt == 3;
    }
};