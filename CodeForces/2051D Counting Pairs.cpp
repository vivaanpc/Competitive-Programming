#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	ll n, x, y;
	cin >> n >> x >> y;
	ll sum  = 0;
	vector<ll> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		sum += v[i]; //precalculating total sum
	}
	ll ans = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; ++i) {
		ll temp = v[i];
		ll biggest = sum - temp - x, smallest = sum - temp - y;
		ll lb = lower_bound(v.begin() + i + 1, v.end(), smallest) - v.begin(); //for smallest leftmost index
		ll ub = upper_bound(v.begin() + i + 1, v.end(), biggest) - v.begin() - 1; // for next smaller index
		if (lb < n && lb <= ub) { //smaller than the entire array and left is smaller than right
			ans += (ub - lb + 1);
		}
	}
	cout << ans << "\n";
}
//vivaanpc
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