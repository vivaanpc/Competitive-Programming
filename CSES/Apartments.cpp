#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, m, k, count = 0;
	cin >> n >> m >> k;
	vector<int> men(n), apt(m);
	for (int i = 0; i < n; ++i) {
		cin >> men[i];
	}
	sort(men.begin(), men.end());
	for (int i = 0; i < m; ++i) {
		cin >> apt[i];
	}
	sort(apt.begin(), apt.end());
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (men[i] <= apt[j] && apt[j] <= men[i] + k) {
			i++;
			j++;
			count++;
		} else if (men[i] >= apt[j] && apt[j] >= men[i] - k) {
			i++;
			j++;
			count++;
		} else {
			if (men[i] < apt[j]) {
				i++;
			} else {
				j++;
			}
		}
	}
	cout << count << endl;
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}