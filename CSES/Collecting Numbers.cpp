#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
void solve() {
	int n, count = 1;
	cin >> n;
	vector<int> v(n), pos(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		pos[v[i]] = i;
	}
	for (int i = 1; i < n; i++) {
		if (pos[i] > pos[i + 1]) count++;
	}
	cout << count << "\n";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}