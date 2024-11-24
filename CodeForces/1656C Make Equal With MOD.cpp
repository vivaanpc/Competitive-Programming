#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n;
	cin >> n;
	std::vector<long long> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	bool consec = false;
	bool one = false;
	for (int i = 0; i < n; i++) {
		if (v[i] == 1) {
			one = true;
		}
		if (i < n - 1 && v[i] + 1 == v[i + 1]) {
			consec = true;
		}
	}
	cout << ((consec && one) ? "No" : "Yes") << "\n";
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
	return 0;
}