#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
// const int mod = 1e9 + 7;
const int mod = 1000000007;
/*rollback and standard method; offset by 1, dp[0] is technically dp[1]*/
void solve() {
	int n;
	cin >> n;
	vector<int> dp (n + 1);
	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= 6; j++) {
			if (i - j >= 0) {
				dp[i] = (dp[i] + dp[i - j]) % mod;
			}
		}
	}
	cout << dp[n] << endl;
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