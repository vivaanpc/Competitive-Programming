#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> v(n);
	int countOdd = 0, countEven = 0;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		if ((v[i] & 1) == 1) {
			countOdd++;
		} else {
			countEven++;
		}
	}
	if (countEven) {
		cout << countOdd + 1 << "\n";
	} else {
		cout << countOdd - 1 << "\n";
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