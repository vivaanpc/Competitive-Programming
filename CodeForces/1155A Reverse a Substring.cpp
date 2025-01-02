#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] > s[i + 1]) {
			cout << "YES\n";
			cout << i + 1 << " " << i + 2;
			return;
		}
	}
	cout << "NO";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}