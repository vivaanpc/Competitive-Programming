#include<bits/stdc++.h>
using namespace std;
//vivaanpc

bool checker (int n) {
	double temp = sqrt(n);
	int temp2 = sqrt(n);
	if (temp == temp2) {
		return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a;
		string s;
		cin >> a >> s;
		int length = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0') {
				length++;
			}
		}
		bool a1 = checker(a);
		bool s1 = checker(length);
		if (s1 == true && a1 == true) {
			if (a > 4 && length == 0) {
				cout << "NO" << "\n";
			} else {
				cout << "YES" << "\n";
			}
		} else {
			cout << "NO" << "\n";
		}
	}
}