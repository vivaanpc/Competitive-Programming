#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<ll> b(n);
	unordered_map<int, int> mapA;
	unordered_map<int, int> mapB;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mapA[a[i]]++;
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		mapB[b[i]]++;
	}
	if (mapA.size() + mapB.size() >= 4) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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