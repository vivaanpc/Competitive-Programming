#include<bits/stdc++.h>
//alphaqueue
using namespace std;
//alphaqueue
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	if (n == 1) {
		cout << "0\n";
		return;
	}
	int count = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (v[i] % 2 == v[i + 1] % 2) {
			count++;
		}
	}
	cout << count << "\n";
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