#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, d;
	cin >> n >> d;
	cout << 1 << " ";
	if (d % 3 == 0 || n >= 3) {
		cout << 3 << " ";
	}
	if (d == 5) {
		cout << 5 << " ";
	}
	if (d == 7 || n >= 3) {
		cout << 7 << " ";
	}
	if ((d % 3 == 0 && n >= 3) || d == 9 || n >= 6) {
		cout << 9 << " ";
	}
	cout << "\n";
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