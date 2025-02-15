#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	string s;
	cin >> s;
	// int count = 0;
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] == s[i - 1]) {
			cout << 1 << "\n";
			return;
		}
	}
	cout << s.length() << "\n";
}
//alphaqueue
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