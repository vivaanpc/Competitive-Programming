#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<ll>v1(n);
	vector<ll>v2(n);
	ll count = 0;
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> v2[i];
	}
	int i = 0, j = 0;
	while (i < n && j < n) {
		if (v2[j] < v1[i]) {
			count++;
			j++;
		}
		else {
			i++;
			j++;
		}
	}
	cout << count << endl;
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