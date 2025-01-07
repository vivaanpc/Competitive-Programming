#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		s.insert(a);
	}
	cout << s.size();
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}