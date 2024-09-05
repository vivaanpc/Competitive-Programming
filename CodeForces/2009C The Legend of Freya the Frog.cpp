#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long x, y, k;
		cin >> x >> y >> k;

		long long m1 = 0, m2 = 0;

		m1 += ceil((double)x / k);
		m2 += ceil((double)y / k);
		if (m1 > m2) {
			cout << m1 * 2 - 1 << "\n";
		} else {
			cout << m2 * 2 << "\n";
		}
	}
	return 0;
}