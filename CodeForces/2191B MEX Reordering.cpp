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
    int n;
    cin >> n;
    vector<int> v(n);
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            count0++;
        }
        if (v[i] == 1) {
            count1++;
        }
    }
    if (count0 == 1) {
        cout << "YES\n";
        return;
    }
    if (count0 > 1 && count1 > 0) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";

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