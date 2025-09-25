#include<bits/stdc++.h>
//ragemaxxing
using namespace std;
//ragemaxxing
typedef long long ll;
void solve() {
	int n, k;
    cin >> n >> k;
    int count = 0;
    vector<bool> present(k, false);
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val == k) {
            count++;
        }
        if (val < k) {
            present[val] = true;
        }
    }
    int m = 0;
    for (int i = 0; i < k; ++i) {
        if (!present[i]) {
            m++;
        }
    }
    cout << max(m, count) << endl;
}
//ragemaxxing
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