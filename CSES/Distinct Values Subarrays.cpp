#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	map<int, int> mp;
	int l = 0, r = 0;
	ll ans = 0;
	for (; r < n; r++) {
		mp[v[r]]++;

		while (mp[v[r]] > 1) {
			mp[v[l]]--;
			l++;
		}

		ans += (r - l + 1LL);
	}
	cout << ans;
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