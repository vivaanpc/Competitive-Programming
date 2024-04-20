#include<bits/stdc++.h>
using namespace std;
int main () {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int ans = 0;
		for (int i = 0; i < n - 1; i++) {
			int x;
			cin >> x;
			ans -= x;
		}
		cout << ans << endl;
	}
}