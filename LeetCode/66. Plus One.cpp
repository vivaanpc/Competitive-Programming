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
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        bool carry = false;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] == 9) {
                carry = true;
                v[i] = 0;
            } else {
                if (carry) {
                    carry = false;
                    v[i]++;
                    break;
                } else {
                    v[i]++;
                    return v;
                }
            }
        }
        if (carry) {
            v.insert(v.begin(), 1);
        }
        return v;
    }
};