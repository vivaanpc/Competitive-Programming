#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int a, b;
	cin >> a >> b;
	if (a + 1 == b) {
		cout << "YES\n";
		return;
	}
	if (a > b && (a - b + 1) % 9 == 0) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";
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