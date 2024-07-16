#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ans = 0;
		for (int i = 0; i < n - 2; i++) {
			auto w = s.substr(i, 3);
			if (w == "map" || w == "pie") {
				ans += 1;
				i += 2;
			}
		}
		cout << ans << '\n';
	}
}