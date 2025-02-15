#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	string s;
	cin >> s;
	if (s == "us") {
		cout << "i\n";
		return;
	}
	for (int i = 0; i < s.length() - 2; ++i) {
		cout << s[i];
	}
	cout << 'i' << "\n";
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