#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	if ((p1 + p2 + p3) % 2 == 1) {
		cout << -1 << "\n";
	} else {
		cout << min((p1 + p2 + p3) / 2, p1 + p2) << "\n";
	}
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