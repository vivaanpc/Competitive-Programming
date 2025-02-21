#include<bits/stdc++.h>
using namespace std;
//vivaanpc
typedef long long ll;
//vivaanpc
void solve() {
	int n;
	cin >> n;
	n -= 2;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n - 2; ++i) {
		if (v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 1) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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
