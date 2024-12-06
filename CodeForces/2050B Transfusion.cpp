#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n;
	cin >> n;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> v[i];
	}
	long long oddCount = 0, evenCount = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			oddCount += v[i];
		} else {
			evenCount += v[i];
		}
	}
	bool check;
	if (n % 2 == 0) {
		check = ((evenCount % ((n + 1) / 2) == 0) && (oddCount % (n / 2) == 0));
		evenCount /= (n / 2);
		oddCount /= (n / 2);
	} else {
		check = ((evenCount % (n / 2) == 0) && (oddCount % ((n + 1) / 2) == 0));
		evenCount /= (n / 2);
		oddCount /= ((n + 1) / 2);
	}

	if (n % 2 == 0) {
		cout << ((evenCount == oddCount && check) ? "YES\n" : "NO\n");
	} else {
		;

		cout << ((evenCount == oddCount && check) ? "YES\n" : "NO\n");
	}
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}