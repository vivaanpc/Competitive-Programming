#include<bits/stdc++.h>
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k, count = 0;
		cin >> n >> k;
		if (k == 0) {
			cout << 0 << endl;
		} else if (k - n == 0) {
			cout << 1 << endl;
		} else {
			k -= n;
			count++;
			while (k > 0) {
				k -= 2 * (n - 1);
				n--;
				count += 2;
			}
			k += n;
			if (k <= 0) {
				count--;
				cout << count << endl;
			} else {
				cout << count << endl;
			}
		}
	}
}