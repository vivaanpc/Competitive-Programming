#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    ll halfsum = (n * (n + 1)) / 2;
    if (halfsum % 2 != 0) {
        cout << "NO";
        return;
    }
    halfsum /= 2;
    vector<ll> set1, set2;
    for (ll i = n; i > 0; i--) {
        if (halfsum >= i) {
            halfsum -= i;
            set1.push_back(i);
        } else {
            set2.push_back(i);
        }
    }
    cout << "YES\n" << set1.size() << "\n";
    for (int i = 0; i < set1.size(); ++i) {
        cout << set1[i] << " ";
    }
    cout << "\n" << set2.size() << "\n";
    for (int i = 0; i < set2.size(); ++i) {
        cout << set2[i] << " ";
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