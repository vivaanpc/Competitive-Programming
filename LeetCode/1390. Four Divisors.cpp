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
    int getDivisors(int &n) {
        int ans = 0, sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (ans > 4) return 0;
            if (i * i == n && i * i == n) {
                ans++;
                sum += n;
                break;
            }
            if (n % i == 0) {
                ans += 2;
                sum += i + n / i;
            }
        }
        if (ans == 4) return sum;
        return 0;
    }
    int sumFourDivisors(vector<int>& v) {
        ll ans = 0;
        for (auto& x : v) {
            ans += 0LL + getDivisors(x);
        }
        return ans;
    }
};