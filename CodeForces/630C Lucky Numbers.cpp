#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += (1LL << i);
	}
	cout << sum;
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