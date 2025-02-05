#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
//vivaanpc
void display() {
	cout << "vivaanpc\n";
}
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		ans += v[i];
	}
	while (v.size() > 1) {
		ll checksum1 = 0, checksum2 = 0;
		for (int i = 0; i < v.size() - 1; i++) {
			checksum1 += v[i + 1] - v[i];
			checksum2 += v[i] - v[i + 1];
		}
		if (checksum1 > checksum2) {
			for (int i = 0; i <= v.size() - 2; ++i) {
				v[i] = v[i + 1] - v[i];
			}
		} else {
			for (int i = 0; i < v.size() - 1; ++i) {
				v[i] = v[i] - v[i + 1];
			}
		}
		v.pop_back();
		ans = max({ans, checksum1, ans, checksum2});
	}
	cout << ans << "\n";
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