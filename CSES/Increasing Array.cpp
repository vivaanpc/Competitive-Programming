#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	cin >> v[0];
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		cin >> v[i];
		if (v[i] < v[i - 1]) {
			ans += v[i - 1] - v[i];
			v[i] = v[i - 1];
		}
	}
	cout << ans << endl;
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