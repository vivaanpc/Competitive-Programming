#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int temp = c % (a + b);
	if (temp < a) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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