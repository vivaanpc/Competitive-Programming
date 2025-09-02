#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	map<ll, int> mp;
	for (int i = 0; i < n; ++i) {
		ll temp = k - v[i];
		if (mp.count(temp)) {
			cout << mp[temp] + 1 << " " << i + 1 << endl;
			return;
		}
		mp[v[i]] = i;
	}
	cout << "IMPOSSIBLE" << endl;
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