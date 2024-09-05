#include<bits/stdc++.h>
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long l, r, count = 0;
		cin >> l >> r;
		if (l == r) {
			cout << 1 << "\n";
		} else {
			for (int i = 0; l < r && l + i <= r; i++) {
				l += i;
				count++;
			}
			cout << count << "\n";
		}
	}
}