#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << -1 << "\n";
	} else {
		cout << n;
		for (int i = 1; i < n; i++) {
			cout << " " << i;
		}
		cout << endl;
	}
}
//alphaqueue
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}