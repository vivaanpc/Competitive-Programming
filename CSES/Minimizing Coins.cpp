#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> v(n), dp(k + 1, INT_MAX);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    dp[0] = 0;
    for (const auto& x : v) {
        for (int i = 0; i <= k; i++) {
            if (i + x <= k) {
                dp[i + x] = min (dp[i] + 1LL, dp[i + x]);
            }
        }
    }
    cout << (dp[k] == INT_MAX ? -1 : dp[k]);
}
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}