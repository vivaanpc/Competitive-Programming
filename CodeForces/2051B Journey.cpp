#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int sum = a + b + c;
	int ans = n / sum * 3;
	int rem = n % sum;
	if (rem == 0) {
		cout << ans << "\n";
		return;
	}
	rem -= a;
	if (rem <= 0) {
		cout << ans + 1 << "\n";
		return;
	}
	rem -= b;
	if (rem <= 0) {
		cout << ans + 2 << "\n";
		return;
	}
	cout << ans + 3 << "\n";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}