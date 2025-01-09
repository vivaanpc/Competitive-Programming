#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n;
	cin >> n;
	vector<int> movie1(n), movie2(n);
	int r1 = 0, r2 = 0, bothPlus = 0, bothNeg = 0;
	for (int i = 0; i < n; i++) {
		cin >> movie1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> movie2[i];
	}
	for (int i = 0; i < n; ++i) {
		if (movie1[i] > movie2[i]) {
			if (movie1[i] == 1) r1++;
		} else if (movie1[i] < movie2[i]) {
			if (movie2[i] == 1) r2++;
		} else if (movie1[i] == 1 && movie2[i] == 1) {
			bothPlus++;
		} else if (movie1[i] == -1 && movie2[i] == -1) {
			bothNeg++;
		}
	}
	while (bothNeg--) {
		if (r1 > r2) {
			r1--;
		} else {
			r2--;
		}
	}
	// cout << r1 << r2 << bothPlus << endl;
	while (bothPlus--) {
		if (r1 > r2) {
			r2++;
		} else {
			r1++;
		}
	}
	cout << min(r1, r2) << "\n";
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