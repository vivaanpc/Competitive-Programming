//Also try with binary exponentiation
#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, k;
	cin >> n >> k;
	ll sum = 1;
	while (k--) {
		sum *= n;
		sum = sum % 1000000007;
	}
	cout << sum << "\n";

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