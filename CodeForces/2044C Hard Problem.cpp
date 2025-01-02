#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int m, a, b, c;
	cin >> m >> a >> b >> c;
	int m1 = m, m2 = m;
	int ans = 0;
	if (m1 >= a) {
		m1 -= a;
		ans += a;
		if (c > m1) {
			ans += m1;
			c -= m1;
		} else {
			ans += c;
			c = 0;
		}
	} else {
		ans += m1;
	}
	if (m2 >= b) {
		m2 -= b;
		ans += b;
		if (c > m2) {
			ans += m2;
			c -= m2;
		} else {
			ans += c;
			c = 0;
		}
	}
	else {
		ans += m2;
	}
	cout << ans << "\n";
}
//vivaanpc
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