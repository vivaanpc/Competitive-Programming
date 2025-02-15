#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	vector<int> left , right;
	for (int i = 0; i < r; i++) {
		left.push_back(v[i]);
	}
	for (int i = l - 1; i < n; i++) {
		right.push_back(v[i]);
	}
	left.resize(left.size());
	right.resize(right.size());
	sort(left.begin(), left.end());
	sort(right.begin(), right.end());
	cout << min(accumulate(left.begin(), left.begin() + r - l + 1, 0LL), accumulate(right.begin(), right.begin() + r - l + 1, 0LL)) << "\n";

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