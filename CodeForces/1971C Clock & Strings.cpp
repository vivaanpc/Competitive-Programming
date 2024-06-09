#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int mini = min(a, b);
		int maxi = max(a, b);
		int cnt = 0;
		if (c >= mini && c <= maxi) {
			cnt++;
		}
		if (d >= mini && d <= maxi) {
			cnt++;
		}
		if (cnt % 2 == 0) {
			cout << "NO" << "\n";
		}
		else {
			cout << "YES" << "\n";
		}
	}
	return 0;
}