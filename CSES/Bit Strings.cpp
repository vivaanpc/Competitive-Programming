//binary exponentiation
#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
#define MOD 1000000007
//vivaanpc
int binaryExponentiation(int n) {
	if (n == 1) {
		return 2;
	}
	int half = binaryExponentiation(n / 2);
	int result = (1LL * half * half) % MOD;
	if (n & 1) {
		result = (result * 2) % MOD;
	}
	return result;
}
void solve() {
	int n;
	cin >> n;
	int ans = 1;
	for (int i = 0; i < n; ++i) {
		ans = (ans << 1) % MOD;
	}
	cout << ans;
	// cout << binaryExponentiation(n);
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