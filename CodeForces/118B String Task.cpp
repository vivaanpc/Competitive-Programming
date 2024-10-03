#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	string t = "AOYEUI";
	string s;
	cin >> s;
	for (auto &c : s) {
		if (t.find(toupper(c)) == string::npos) {
			cout << '.' << char(tolower(c));
		}
	}
	cout << "\n";

	return 0;
}