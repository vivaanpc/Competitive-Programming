#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
long long oddCount(long long z) {
	return (z + 1) / 2;
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		long long a = max(n - k + 1, 1LL), b = n, ans = oddCount(b) - oddCount(a - 1);
		if (ans % 2 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}