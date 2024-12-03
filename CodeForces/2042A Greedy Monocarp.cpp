#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, k;
	cin >> n >> k;

	std::vector<int> v(n);
	std::vector<int> prefix(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin() , v.end() , greater<int>());

	prefix[0] = v[0];
	for (int i = 1; i < n ; i++) {
		prefix[i] = prefix[i - 1] + v[i];
	}

	int ans = 0;

	for (int i = 0; i < n ; i++) {
		if (prefix[i] <= k) {
			ans = prefix[i];
		} else {
			break;
		}
	}
	cout << k - ans << endl;
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