#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
multiset<int> tickets;
void solve() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		int j;
		cin >> j;
		tickets.insert(j);
	}
	while (m--) {
		int a;
		cin >> a;
		auto it = tickets.upper_bound(a);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *--it << "\n";
			tickets.erase(it);
		}
	}
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}