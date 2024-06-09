#include<bits/stdc++.h>
using namespace std;
int solve () {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == 1 && c == 1) {
		return a + b + c;
	}
	if (a == 1 && b == 1) {
		return (a + b) * c;
	}
	if (b == 1 && c == 1) {
		return a * (b + c);
	}
	if (c == 1) {
		return a * (b + c);
	}
	if (a == 1) {
		return (a + b) * c;
	}
	if (b == 1) {
		if (a >= c) {
			return a * (b + c);
		} else {
			return (a + b) * c;
		}
	}
	return a * b * c;
}
int main () {
	cout << solve();
}