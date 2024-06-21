#include<bits/stdc++.h>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	string s;
	int temp = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] == s[i + 1]) && (s[i] == s[i + 2]) && (s[i] == s[i + 3]) && (s[i] == s[i + 4]) && (s[i] == s[i + 5]) && (s[i] == s[i + 6])) {
			temp++;
			break;
		}
	}
	if (temp > 0) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}