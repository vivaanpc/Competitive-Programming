#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int a, b;
	cin >> a >> b;
	if (a == b && __gcd(b, a) == 1) {
		cout << 1 << "\n";
		return;
	}

	cout << b - a << "\n";
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