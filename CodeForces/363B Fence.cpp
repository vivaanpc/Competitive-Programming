#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
	int n, k;
	cin >> n >> k;
	long long ans = 0, currentSum = 0;
	long long min = LLONG_MAX;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >>  v[i];
		currentSum +=  v[i];
		if (i >= k) {
			currentSum = currentSum -  v[i - k];
			if (currentSum <= min) {
				min = currentSum;
				ans = i - k + 2;
			}
		}
		else if (i == k - 1) {
			if (currentSum <= min) {
				min = currentSum;
				ans = 1;
			}
		}
	}
	cout << ans ;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
}