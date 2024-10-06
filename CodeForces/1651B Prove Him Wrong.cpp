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
		int n;
		cin >> n;
		if (n <= 19) {//maximum power of 3 in given constraints
			int p = 1;
			cout << "YES\n";
			for (int i = 1; i <= n; i++) {
				cout << p << " ";
				p *= 3;
			}
			cout << "\n";
		} else {
			cout << "NO\n";
		}

	}
}