#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	int n;
	cin >> n;
	string base = "ROYGBIV";
	string result;
	result += base;
	string repeat = "GBIV";
	for (int i = 7; i < n; i++) {
		result += repeat[(i - 7) % 4];
	}
	cout << result << endl;
	return 0;
}
