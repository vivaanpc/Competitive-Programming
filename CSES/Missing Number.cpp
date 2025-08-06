#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	ll sum1 = 0, sum2;
	int n, maxi = 1;
	cin >> n;
	vector<int> v(n - 1);
	for (int i = 0; i < n - 1; i++) {
		cin >> v[i];
		maxi = max(maxi, v[i]);
		sum1 += v[i];
	}
	sum2 = 1LL * maxi * (maxi + 1) / 2;
	if (sum1 != sum2) {
		cout << sum2 - sum1 << endl;
	} else {
		cout << n << endl;
	}
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