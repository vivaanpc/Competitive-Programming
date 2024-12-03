#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, len;
	cin >> n >> len;
	std::vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	double ans = max(v[0], len - v[n - 1]);
	for (int i = 0; i < n - 1; i++) {
		double cur = 0.5 * (v[i + 1] - v[i]);
		if (cur > ans) {
			ans = cur;
		}
	}
	cout << setprecision(9) << ans;
	return 0;
}