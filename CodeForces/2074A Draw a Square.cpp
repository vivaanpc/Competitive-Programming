#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int l, r, d, u;
	cin >> l >> r >> d >> u;
	if ((u - l == l - d) && (u - r == r - d) && (u - d == r - l)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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