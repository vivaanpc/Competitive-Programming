#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int s, k, m;
    cin >> s >> k >> m;
    int lastFlip = m % k;
    int parity = m / k;
    int temp = (parity % 2 != 1 ? s : min(s, k));
    debug(temp, lastFlip);
    cout << ((temp - lastFlip) < 0 ? 0 : temp - lastFlip) << "\n";
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