#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long x, y;
		cin >> x >> y;
		x = min(x, y);
		cout << (n + x - 1) / x << '\n';
	}
	return 0;
}