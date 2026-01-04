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
    int getDivisors(int& n) {
        int cnt = 0, sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i * i == n) {
                    cnt++;
                    sum += i;
                } else {
                    cnt += 2;
                    sum += i + n / i;
                }
                if (cnt > 4) return 0;
            }
        }
        return cnt == 4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& v) {
        ll ans = 0;
        for (auto& x : v) {
            ans += 0LL + getDivisors(x);
        }
        return ans;
    }
};