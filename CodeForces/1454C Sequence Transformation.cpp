#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<vector<int>> v(n + 1);
	for (int i = 1; i <= n; ++i) {
		int x;
		cin >> x;
		v[x].push_back(i);
	}
	int ans = INT_MAX;
	for (int i = 1; i <= n; ++i) {
		if (v[i].empty()) {
			continue;
		}
		int res = 0;
		if (v[i].front() != 1) {
			res++;
			// cout << ":HI";
		}
		if (v[i].back() != n) {
			// cout << ":HI";
			res++;
		}
		for (int j = 0; j < v[i].size() - 1; ++j) {
			if (v[i][j] + 1 != v[i][j + 1]) {
				res++;
			}
		}
		ans = min(res, ans);
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