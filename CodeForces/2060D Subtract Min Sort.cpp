#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for	(int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (v[0] > v[1]) {
		cout << "NO\n";
		return;
	}
	int temp = min(v[0], v[1]);
	v[0] -= temp;
	v[1] -= temp;
	for (int i = 2; i < n; ++i) {
		// cout << v[i - 1] << " " << v[i] << "\n";
		if (v[i] < v[i - 1]) {
			cout << "NO\n";
			return;
		}
		v[i] -= min(v[i], v[i - 1]);
	}
	cout << "YES\n";
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