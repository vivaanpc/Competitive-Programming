#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
// int counting = 0;
void solve() {
	// cout << "count: " << ++counting << " ";
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll i = 0; i < n; ++i) {
		cin >> v[i];
	}
	ll sides = 0, sidesIndex = -1;
	sort (v.begin(), v.end());
	for (ll i = n - 1; i > 0; --i) {
		if (v[i] == v[i - 1]) {
			// checkDuplicates = false;
			sides = v[i];
			sidesIndex = i;
			break;
			// cout << "sidesIndex : " << sidesIndex << endl;
		}
	}
	if (sidesIndex == -1) {
		cout << "-1\n";
		return;
	}
	v.erase(v.begin() + sidesIndex);
	v.erase(v.begin() + sidesIndex - 1);
	v.resize(v.size());
	for (ll i = 0; i < v.size() - 1; ++i) {
		if (v[i + 1] < v[i] + sides * 2) {
			cout << sides << " " << sides << " " << v[i] << " " << v[i + 1] << "\n";
			return;
		}
	}
	cout << "-1\n";

}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}