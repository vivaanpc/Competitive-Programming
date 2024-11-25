#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	string s;
	cin >> s;
	if (s.size() == 1) {
		cout << -1 << "\n";
		return;
	}
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == s[i + 1]) {
			cout << s[i] << s[i + 1] << "\n";
			return;
		}
	}
	if (s.size() >= 3) {
		for (int i = 0; i < s.size() - 2; i++) {
			if (s[i] != s[i + 2]) {
				cout << s[i] << s[i + 1] << s[i + 2] << "\n";
				return;
			}
		}
	}
	cout << -1 << "\n";
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