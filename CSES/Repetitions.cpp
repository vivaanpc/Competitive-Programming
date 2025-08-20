#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	string s;
	cin >> s;
	int maxi = 1;
	int tempmaxi = 1;
	for (int i = 1; i < s.length(); ++i) {
		if (s[i] == s[i - 1]) {
			tempmaxi++;
			maxi = max(tempmaxi, maxi);
		} else {
			tempmaxi = 1;
		}
	}
	cout << maxi << endl;
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}