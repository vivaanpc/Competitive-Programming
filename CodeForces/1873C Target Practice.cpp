#include<bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	while (t--) {
		int ans = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				char c;
				cin >> c;
				if (c == 'X') {
					ans += min({i + 1, 10 - i, j + 1, 10 - j});
				}
			}
		}
		cout << ans << endl;
	}
}