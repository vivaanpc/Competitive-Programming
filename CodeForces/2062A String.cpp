#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	string s;
	cin >> s;
	int countOne = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '1') {
			countOne++;
		}
	}
	cout << countOne << "\n";
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