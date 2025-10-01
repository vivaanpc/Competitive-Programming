#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(n));
    if (v[n - 1][n - 1] == '.') dp[n - 1][n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (v[i][n - 1] == '*') dp[i][n - 1] = 0;
        else dp[i][n - 1] = dp[i + 1][n - 1];
    }
    for (int j = n - 2; j >= 0; j--) {
        if (v[n - 1][j] == '*') dp[n - 1][j] = 0;
        else dp[n - 1][j] = dp[n - 1][j + 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            if (v[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;
        }
    }
    cout << dp[0][0];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; ++j) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
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