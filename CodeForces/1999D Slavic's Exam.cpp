#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt;
	cin >> tt;
	while (tt--) {
		string s, t;
		cin >> s >> t;
		bool fail = false;
		int ptr = 0;
		for (char& c : t) {
			while (ptr < int(s.size()) && s[ptr] != '?' && s[ptr] != c) {
				ptr += 1;
			}
			if (ptr == int(s.size())) {
				fail = true;
				break;
			}
			s[ptr++] = c;
		}
		for (char& c : s) {
			if (c == '?') {
				c = 'a';
			}
		}
		if (!fail) {
			cout << "YES" << '\n';
			cout << s << '\n';
		} else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}