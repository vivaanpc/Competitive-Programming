#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int t;
	if (n % 3 == 0) {
		cout << s.substr(0, 3);
		t = 3;
	} else if (n % 3 == 1) {
		cout << s.substr(0, 2) << '-' << s.substr(2, 2);
		t = 4;
	} else {
		cout << s.substr(0, 2);
		t = 2;
	}
	while (t < n) {
		cout << '-' << s.substr(t, 3);
		t += 3;
	}
	cout << "\n";
}