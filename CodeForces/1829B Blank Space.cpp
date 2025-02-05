#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	for	(int i = 0; i < n; i++) {
		cin >> v[i];
		// cout << v[i] << " ";
	}
	// cout << endl;
	int temp = 0, count = 0;
	for (int i = 0; i < n; ++i) {
		if (v[i] == 0) {
			temp++;
		} else {
			count = max(count, temp);
			temp = 0;
		}
		// cout << temp << count << endl;
	}
	count = max(count, temp);
	cout << count << "\n";
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