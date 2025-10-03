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
    vector<ll> v(n);
    ll maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    ll sum = 0, best = 0;
    for (int i = 0; i < n; i++) {
        sum = max(sum + v[i], v[i]);
        best = max(sum, best);
    }
    if (best == 0 && maxi != 0) {
        cout << maxi;
    } else {
        cout << best;
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