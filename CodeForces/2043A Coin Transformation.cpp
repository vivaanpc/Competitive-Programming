#include<bits/stdc++.h>
#include <cmath>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	ll n;
	cin >> n;
	if (n < 4) {
		cout << 1 << "\n";
		return;
	}
	ll count = 1;
	while (n > 3) {
		n /= 4;
		count *= 2;
	}
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