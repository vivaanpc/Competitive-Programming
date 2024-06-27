#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int e = 0;
	while (n) {
		n++;
		int d = n % 10;
		int c = ((n % 100) - d) / 10;
		int b = ((n % 1000) - 10 * c - d) / 100;
		int a = (n - 100 * b - 10 * c - d) / 1000;
		if ((a != b && a != c && a != d) && (b != c && b != d) && c != d) {
			e = 1000 * a + 100 * b + 10 * c + d;
			break;
		}
	}
	cout << e;
}