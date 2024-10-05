#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
bool checker (string s) {
	if (s[0] != '1' || s[s.size() - 1] == '9') {
		return true;
	}
	for (int i = 1; i < s.size() - 1; ++i)
	{
		if (s[i] == '0') {
			return true;
		}
	}
	return false;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		string x;
		cin >> x;
		bool ans = checker(x);
		if (ans) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}
}