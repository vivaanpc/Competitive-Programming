#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
int n, k;
bool possPlacement(vector<int>& v, int mid) {
	int cows = 1, last = v[0];
	for (int i = 1; i < v.size(); ++i) {
		if (v[i] - last >= mid) {
			cows++;
			last = v[i];
		}
		if (cows >= k) return true;
	}
	return false;
}
void solve() {
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int low = 1, high = v[n - 1] - v[0];
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (possPlacement(v, mid)) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << high << "\n";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}