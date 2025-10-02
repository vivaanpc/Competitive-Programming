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
    map<int, int> mp;
    int ans = 0;
    for (int i = 0, j = 0; j < n; j++) {
        mp[v[j]]++;
        while (mp[v[j]] > 1) {
            mp[v[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    cout << ans;
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


// while (v[j] != v[i]) {
//     cout << "while loop i : " << i << " j : " << j << "\n";
//     mp[v[j]]--;
//     j++;
// }
// if (i != j) {
//     cout << "external condn i : " << i << " j : " << j << "\n";
//     mp[v[j]]--;
//     j++;
//     cout << "i : " << i << " j : " << j << "\n";
// }


// cout << i << " " << j << "\n";
// for (auto x : mp) cout << x.first << " " << x.second << "\n";
// cout << "\n";