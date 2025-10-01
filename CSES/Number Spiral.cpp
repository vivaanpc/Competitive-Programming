#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    ll n, row, col;
    cin >> n;
    while (n--) {
        cin >> row >> col;
        if (row <= col && col % 2 == 1) {
            cout << 1LL * col * col - row + 1 << "\n";
        } else if (row >= col && row % 2 == 0) {
            cout << 1LL * row * row - col + 1 << "\n";
        } else if (row <= col && col % 2 == 0) {
            cout << 1LL * (col - 1) * (col - 1) + row << "\n";
        } else {
            cout << 1LL * (row - 1) * (row - 1) + col << "\n";
        }
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