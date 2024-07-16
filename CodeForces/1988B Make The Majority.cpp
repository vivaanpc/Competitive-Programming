#include <bits/stdc++.h>
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char checker = '1';
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				v.push_back(1);
			}
			if (s[i] == '0' && checker == '1') {
				v.push_back(0);
			}
			checker = s[i];
		}
		int zero = 0, one = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1) {
				one++;
			}
			else {
				zero++;
			}
		}
		if (one <= zero) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}