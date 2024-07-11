#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long n, k;
		cin >> n >> k;
		int count = 0;
		vector<int> a(k);
		for (int i = 0; i < k; i++) {
			cin >> a[i];
			if (a[i] == 0) {
				count++;
			}
		}
		sort(a.begin(), a.end());
		int ans = count;
		for (int i = count; i < k - 1; i++) {
			ans += 2 * a[i] - 1;
		}
		cout << ans << "\n";
	}
}
