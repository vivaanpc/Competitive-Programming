#include<bits/stdc++.h>
//Hi Stalker
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//Hi Stalker
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0, temp = 0, last1 = -1, first1 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (first1 == INT_MAX) {
                first1 = i;
            }
            temp = 0;
            last1 = i;
            continue;
        }
        if (s[i] == '0') temp++;
        ans = max(ans, temp);
    }
    int temp2 = n - last1 - 1 + first1;
    cout << max(ans, temp2) << "\n";
}
//Hi Stalker
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}