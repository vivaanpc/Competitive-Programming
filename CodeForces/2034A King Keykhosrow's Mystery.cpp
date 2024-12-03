#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b) << "\n";
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