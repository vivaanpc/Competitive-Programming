#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> sorted = v;
    if (is_sorted(v.begin(), v.end())) {
        cout << "YES\n";
        return;
    }

    if (x <= n / 2) {
        cout << "YES\n";
        return;
    }

    sort(sorted.begin(), sorted.end());
    bool check = false;
    int mini = min(x, n - x);
    int maxi = max(x, n - x);
    for (int i = mini; i < maxi; i++) {
        if (v[i] != sorted[i]) {
            check = true;
        }
    }
    cout << (check == true ? "NO\n" : "YES\n");
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