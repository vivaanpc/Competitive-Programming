#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, size;
	string str;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		cin >> str;
		size = sizeof(str) / sizeof(str[0]);
		if (str[0] <= str[size - 1]) {
			cout << str << "\n";
		}
	}
	return 0;
}