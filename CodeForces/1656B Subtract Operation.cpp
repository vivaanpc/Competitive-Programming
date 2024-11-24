#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, k;
	cin >> n >> k;
	std::vector<long long> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	set s(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (s.count(v[i] + k)) {
			cout << "Yes" << "\n";
			return;
		}
	}
	cout << "No" << "\n";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	// freopen("D:\\Temp\\input.txt", "r", stdin);
	// freopen("D:\\Temp\\output.txt", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}