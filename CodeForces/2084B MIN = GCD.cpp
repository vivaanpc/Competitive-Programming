#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	ll m = *min_element(v.begin(), v.end());
	int checker = count(v.begin(), v.end(), m);
	if (checker >= 2) {
		cout << "Yes\n";
		return;
	}
	ll g = 0;
	int mltCount = 0;
	for (auto x : v) {
		if (x != m && x % m == 0) {
			g = gcd(g, x);
			mltCount++;
		}
	}
	cout << (((mltCount > 0) && (g == m)) ? "Yes\n" : "No\n");
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