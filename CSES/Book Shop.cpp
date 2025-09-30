#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n, w;
    cin >> n >> w;
    vector<int> price(n), pages(n);
    int dp[n + 1][w + 1];
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    for (int i = 0; i <= w; i++) {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (price[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - price[i - 1]] + pages[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w];
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