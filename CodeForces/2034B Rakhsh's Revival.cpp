#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	string s;
	cin >> s;
	//inputs
	int count = 0;
	int check = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '0') {
			check++;
		}
		if (check == m) {
			i += k - 1;
			check = 0;
			count++;
			continue;
		}
		if (s[i] == '1') {
			check = 0;
		}
	}
	cout << count << "\n";
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