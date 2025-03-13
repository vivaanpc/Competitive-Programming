#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	if (n == 1) {
		cout << v[0] << "\n";
		return;
	}
	sort(v.begin(), v.end());
	ll ans = 0;
	for (int i = 0; i < n - 1; i++) {
		ans += v[i] - 1;
	}
	cout << ans + v[n - 1] << "\n";
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