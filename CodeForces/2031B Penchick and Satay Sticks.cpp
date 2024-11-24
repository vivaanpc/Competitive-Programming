#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (v[i] == v[i + 1] + 1) {
			swap (v[i], v[i + 1]);
		}
	}
	cout << (is_sorted(v.begin(), v.end()) ? "YES" : "NO") << "\n";
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
}