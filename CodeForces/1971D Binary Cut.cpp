#include<bits/stdc++.h>
using namespace std;
void solve() {
	string s;
	cin >> s;
	int check = 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] != s[i]) {
			check++;
		}
	}
	if (check > 2 || (check == 2 && s[0] == '0')) {
		check--;
	}
	cout << check << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}