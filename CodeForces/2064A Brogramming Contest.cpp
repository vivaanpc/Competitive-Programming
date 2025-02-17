#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int n, count = 0;
	cin >> n;
	string s;
	cin >> s;
	bool trailing0 = false;
	for (int i = n - 1; i >= 0;) {
		if (s[i] == '0') {
			trailing0 = true;
			i--;
			continue;
		} else {
			while (i >= 0 && s[i] == '1') {
				i--;
			}
			trailing0 ? count += 2 : count += 1;
		}
		// cout << i << " " << count << "\n";
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