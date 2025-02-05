#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	bool check = false;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		int length = max (i, n - i - 1) * 2;
		if (v[i] <= length) {
			check = true;
		}
	}
	if (n == 1) {
		cout << "YES\n";
		return;
	}
	if (check) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
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