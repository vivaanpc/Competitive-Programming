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
    vector<int> v(n), dp(k + 1);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    dp[0] = 1;
    for (const auto& x : v) {
        for (int i = 0; i <= k; i++) {
            if (i + x <= k) {
                dp[i + x] = (dp[i + x] + dp[i]) % mod;
            }
        }
    }
    for (auto i : dp) cout << i << " ";
    // cout << dp[k];
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