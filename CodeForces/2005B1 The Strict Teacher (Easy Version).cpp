#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n, m , q;
		cin >> n >> m >> q;
		int b1, b2, temp1, temp2;
		cin >> temp1 >> temp2;
		b1 = min(temp1, temp2);
		b2 = max(temp1, temp2);
		int c;
		cin >> c;
		if (c < b1 && c < b2) {
			cout << b1 - 1 << "\n";
		} else if (c > b1 && c > b2) {
			cout << n - b2 << "\n";
		} else {
			cout << (b2 - b1) / 2 << "\n";
		}
	}
}