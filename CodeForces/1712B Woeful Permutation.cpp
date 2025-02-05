#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	// vector<int> v(n);
	// for	(int i = 0; i < n; i++) {
	// 	cin >> v[i];
	// }
	if (n == 1) {
		cout << "1\n"; return;
	}
	if (n % 2 == 1) {
		cout << 1 << " ";
	}
	for (int i = n % 2 + 1; i <= n; i += 2) {
		cout << i + 1 << " " << i << " ";
	}
	cout << "\n";
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