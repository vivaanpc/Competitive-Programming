#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> boys(n), girls(m);
	for (int i = 0; i < n; i++) {
		cin >> boys[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> girls[i];
	}
	sort(boys.begin(), boys.end());
	sort(girls.begin(), girls.end());
	if (boys[n - 1] > girls[0]) {
		cout << -1 << endl;
		return;
	}
	long long sum = accumulate(girls.begin(), girls.end(), 0LL);
	for (int i = 0; i < n - 1; i++) {
		sum += 1LL * boys[i] * m;
	}
	if (boys.back() != girls.front()) {
		sum += boys.back();
		sum -= boys[n - 2];
	}
	cout << sum << endl;
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