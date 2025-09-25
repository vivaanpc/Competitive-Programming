#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	// int countN = 0, countZ = 0;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (n == 2) {
		cout << abs(v[0] - v[1]) << '\n';
		return;
	}
	sort (v.begin(), v.end());
	ll max_diff = 0;
    for (int i = 0; i < n; i += 2) {
        ll current_diff = v[i + 1] - v[i];
        max_diff = max(max_diff, current_diff);
    }
    cout << max_diff << "\n";
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