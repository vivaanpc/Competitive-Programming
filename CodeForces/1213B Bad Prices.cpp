#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n + 1);
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		int mn = INT_MAX;
		int ans = 0;
		for (int i = n; i >= 1; --i) {
			if (a[i] > mn) {
				ans++;
			} else {
				mn = a[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}