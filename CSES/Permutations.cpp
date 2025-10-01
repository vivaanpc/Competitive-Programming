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
    if (n == 1) {
        cout << 1;
        return;
    }
    if (n < 4) {
        cout << "NO SOLUTION";
        return;
    }
    if (n == 4) {
        cout << "2 4 1 3";
        return;
    }
    vector<int> v(n);
    int count = 1;
    for (int i = 0; i < n; i += 2) {
        v[i] = count;
        count++;
    }
    for (int i = 1; i < n; i += 2) {
        v[i] = count;
        count++;
    }
    for (auto i : v) cout << i << " ";
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