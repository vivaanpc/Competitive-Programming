#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve(int &N, int &K) {
	int L = 1;
	int H = INT_MAX;
	int ans = 0;
	while (L <= H) {
		// int mid = (L + H) / 2;
		int mid = L + (H - L) / 2;
		int sol = mid - mid / N;
		if (sol > K) {
			H = mid - 1;
		}
		else if (sol < K) {
			L = mid + 1;
		} else {
			ans = mid;
			H = mid - 1;
		}
	}
	cout << ans << "\n";
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int N, K;
		cin >> N >> K;
		solve(N, K);
	}
	return 0;
}