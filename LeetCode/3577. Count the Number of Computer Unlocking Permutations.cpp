#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        int x0 = complexity[0];
        int x1 = *min_element(complexity.begin() + 1, complexity.end());
        if (x0 >= x1) return 0;
        ll cnt = 1;
        for (ll i = 1; i <= n - 1; i++) {
            cnt = ((cnt % mod) * (i % mod) % mod);
        }
        return int(cnt);
    }
};