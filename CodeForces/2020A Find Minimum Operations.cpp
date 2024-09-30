#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k == 1) {
			cout << n << '\n';
			continue;
		}
		int ans = 0;
		while (n > 0) {
			ans += n % k;
			n /= k;
		}
		cout << ans << '\n';
	}
	return 0;
}