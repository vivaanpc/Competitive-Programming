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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    set<ll> st;
    ll power = 2;
    for (int i = 0; i < n; ++i) {
        st.insert(v[i] % power);
    }
    while (st.size() != 2) {
        power <<= 1;
        st.clear();
        for (int i = 0; i < n; ++i) {
            st.insert(v[i] % power);
        }
    }
    cout << power << "\n";
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