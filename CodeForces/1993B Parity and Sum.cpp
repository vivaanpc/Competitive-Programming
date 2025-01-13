#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int a;
	ll maxOdd = INT_MIN;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		if (a & 1) {
			maxOdd = max(maxOdd, a + 0LL); //for ll operations
		} else {
			v.push_back(a);
		}
	}
	/*big brain tactics
	if biggest odd number is in the starting then no problem
	else we keep adding the even numbers until we find a number that is
	greater than the even + odd and then we replace it the biggest even
	number so all others are fine; this addition costs operation + 1
	the smaller number is replaced by the larger number that is why this
	is possible
	*/
	v.resize(v.size());
	n = v.size();
	if (maxOdd == INT_MIN || v.size() == 0) {
		cout << 0 << "\n";
		return;
	}
	int ans = v.size();
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i) {
		if (v[i] < maxOdd) {
			maxOdd += v[i];
			continue;
		} else {
			cout << ans + 1 << "\n";
			return;
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