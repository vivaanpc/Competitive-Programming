#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, x, y;
	cin >> a >> b;
	if (a > b) {
		x = b;
		y = (a - b) / 2;
	}
	else {
		x = a;
		y = (b - a) / 2;
	}
	cout << x << " " << y;
	return 0;
}