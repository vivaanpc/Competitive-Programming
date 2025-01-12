#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int tt, count = 0;
	cin >> tt;
	// cout << tt;
	vector<int> v(tt), unique;
	for (int i = 0; i < tt; ++i) {
		cin >> v[i];
		if (i == 0) { //creating unique array
			unique.push_back(v[i]);
		}//no point in same continuous numbers
		else {
			if (v[i] != v[i - 1]) {
				unique.push_back(v[i]);
			}
		}
	}
	if (tt == 1) { //specified edge case
		cout << 1 << "\n";
		return;
	}
	unique.resize(unique.size());
	int n = unique.size();
	// for (int i = 0; i < n; ++i) {
	// 	cout << unique[i] << endl;
	// }
	for (int i = 1; i < n - 1; i++) {
		// cout << "HI";
		if ((unique[i - 1] < unique[i] && unique[i] < unique[i + 1]) || (unique[i + 1] < unique[i] && unique[i] < unique[i - 1])) {
			count++;//if it is a monotonic flow then middle number is useless
		}
		// cout << count << endl;
	}
	// cout << n << count << endl;
	cout << n - count << "\n";
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