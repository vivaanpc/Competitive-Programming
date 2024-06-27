#include <bits/stdc++.h>
using namespace std;
int solve() {
	int n, a, m, b;
	cin >> n >> m >> a >> b;
	if (b / m > a) {
		return n * a;
	}
	int temp = n % m;
	return b * (n / m) + min(temp * a, b);
}
int main() {
	int x = solve();
	cout << x;
}