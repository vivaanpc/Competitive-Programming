#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "YES\n";
        return;
    }
    if (x > 2 * y || y > 2 * x || x == 0 || y == 0) {
        cout << "NO\n";
        return;
    }
    x %= 3;
    y %= 3;
    if (x == y && y == 0) {
        cout << "YES\n";
    } else {
        if ((y == 2 && x == 1) || (y == 1 && x == 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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