#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> v(k);
	set<int> st;
	st.insert(0);
	st.insert(n);
	multiset<int> ms;
	ms.insert(n);
	for (int i = 0; i < k; i++) {
		cin >> v[i];
		auto it = st.lower_bound(v[i]);
		int right = *it;
		int left = *prev(it);
		ms.erase(ms.find(right - left));
		ms.insert(v[i] - left);
		ms.insert(right - v[i]);
		st.insert(v[i]);
		cout << *ms.rbegin() << " ";
	}

}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}