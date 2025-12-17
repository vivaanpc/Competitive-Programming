#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    long long getDescentPeriods(vector<int>& v) {
        if (v.size() == 1) return 1;
        ll ans = v.size();
        int temp = 0;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] != (v[i - 1] - 1)) {
                debug(temp, ans);
                if (temp == 0) continue;
                ans += (1LL * temp * (temp + 1)) / 2 - temp;
                temp = 0;
            } else {
                if (temp == 0) temp += 2;
                else temp++;
            }
        }
        if (temp > 0) {
            ans += (1LL * temp * (temp + 1)) / 2 - temp;
        }
        return ans;
    }
};
int main() {
    Solution soln;
    vector<int> v = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 4, 3, 10, 9, 8, 7};
    cout << soln.getDescentPeriods(v) << "\n";
}