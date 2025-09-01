#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	map<int, int> mp;
	int a, b;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		mp[a]++;
		mp[b]--;
	}
	int mx = INT_MIN, curr = 0;
	for (const auto& i : mp) {
		curr += i.second;
		mx = max(mx, curr);
	}
	cout << mx << endl;
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}