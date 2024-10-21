#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    
    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        auto it = lower_bound(b.begin(), b.end(), a);
        int ans;
        if (it == b.begin()) {
            ans = b[0] - 1;
        } else if (it == b.end()) {
            ans = n - b[m - 1];
        } else {
            ans = (*it - *(it - 1)) / 2;
        }
        cout << ans << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("D:\\Temp\\input.txt", "r", stdin);
    // freopen("D:\\Temp\\output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}