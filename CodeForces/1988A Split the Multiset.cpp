#include<bits/stdc++.h>
//vivaanpc
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k, checker = 0;
		cin >> n >> k;
		if (n == 1) {
			cout << 0 << "\n";
		} else {
			//vivaanpc
			if (n == 1) {
				cout << 0 << "\n";
			} else if (n <= k) {
				cout << 1 << "\n";
			} else {
				while (n > 1) {
					n -= (k - 1);
					checker++;
				}
				// bool flag = false;
				cout << checker << "\n";
			}
		}
	}
}