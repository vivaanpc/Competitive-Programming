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
    string largestEven(string s) {
        int idx = -1;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '2') {
                idx = i;
                break;
            }
        }
        return idx == -1 ? "" : s.substr(0, idx + 1);
    }
};