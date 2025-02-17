#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> pref(n);;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	if (v[0] == v[n - 1]) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n" << v[0] << " " << v[n - 1] << " ";
	for (int i = 1; i < n - 1; i++) {
		cout << v[i] << " ";
	}
	cout << "\n";
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