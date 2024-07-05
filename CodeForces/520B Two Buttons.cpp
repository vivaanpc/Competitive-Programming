#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m, n;
	cin >> m >> n;
	int ans = 0;
	while (n > m) {
		if (n % 2  != 0) {
			n += 1;
		} else {
			n /= 2;
		}
		ans += 1;
	}
	cout << ans + (m - n);
}