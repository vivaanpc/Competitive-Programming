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
    if (k == n * n - 1) {
        cout << "NO\n";
        return;
    }
    k = n * n - k;
    vector<vector<char>> v(n, vector<char>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k > 0) {
                if (i == 0 && j == 0) v[i][j] = 'R';
                else if (i == 0) v[i][j] = 'L';
                else v[i][j] = 'U';
                k--;
            } else {
                v[i][j] = 'R';
            }
        }
    }
    cout << "YES\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j];
        }
        cout << "\n";
    }
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