#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	int count = 0, index = 0;
	int sum = INT_MIN;
	for (int i = 0; i < n; ++i) {
		cin >> v[i].first;
	}
	for (int i = 0; i < n; ++i) {
		cin >> v[i].second;
		sum = max(sum, (v[i].second - v[i].first));
		if (v[i].second - v[i].first > 0) {
			count++;
			sum = max(sum, v[i].second - v[i].first);
			index = i;
		}
	}
	if (count > 1) {
		cout << "NO\n";
	} else {
		for (int i = 0; i < n; ++i) {
			if (i == index) {
				continue;
			}
			v[i].first -= sum;
			if (v[i].first < v[i].second) {
				cout << "NO\n";
				return;
			}
		}
		cout << "YES\n";
	}
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