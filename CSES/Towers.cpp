#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    multiset<int> ms;
    ms.insert(v[0]);
    for (int i = 1; i < n; ++i) {
        auto it = ms.upper_bound(v[i]);
        if (it == ms.end()) {
            ms.insert(v[i]);
        } else {
            ms.erase(it);
            ms.insert(v[i]);
        }
    }
    cout << ms.size();
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