#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, k;
	cin >> n >> k;
	int ans = 0;
	bool check = true;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.length() > k) check = false;
		if (check) {
			if (k >= s.length())
				k -= s.length();
			ans++;
		}
	}
	cout << ans << "\n";
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