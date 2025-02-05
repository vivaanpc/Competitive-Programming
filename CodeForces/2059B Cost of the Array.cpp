#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	vector<int> b;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	if (n == k) { //brute force
		for (int i = 1; i < n; i += 2) {
			b.push_back(v[i]);
		}
		b.push_back(0);
		b.resize(b.size());
		for (int i = 0; i < b.size(); ++i) {
			if (b[i] != i + 1) {
				cout << i + 1 << "\n";
				return;
			}
		}
	} else { //answer can only be at 1 or 2
		for (int i = 1; i <= n - k + 1; ++i) { //check till max subarray size
			if (v[i] != 1) { //if start is not 1, ans = 1
				cout << 1 << "\n";
				return;
			}
		}
		cout << "2\n"; //else 2
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