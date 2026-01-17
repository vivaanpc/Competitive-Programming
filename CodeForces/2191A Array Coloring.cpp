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
    vector<pair<int, int>> red(n), blue(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        red[i] = {v[i], i % 2};
        blue[i] = {v[i], (i % 2) ^ 1};
    }
    sort(blue.begin(), blue.end());
    sort(red.begin(), red.end());
    int i = 1;
    for (; i < n; i++) {
        if (blue[i].second == blue[i - 1].second) {
            break;
        }
    }
    if (i == n) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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