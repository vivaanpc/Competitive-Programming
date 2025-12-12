#include<bits/stdc++.h>
//Hi Stalker
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//Hi Stalker
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n), odd, even, ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] & 1) odd.push_back(v[i]);
        else even.push_back(v[i]);
    }
    if (odd.empty()) {
        for (int i = 0; i < n; i++) {
            cout << "0 ";
        }
        cout << "\n";
        return;
    }
    if (even.empty()) {
        sort(odd.begin(), odd.end(), greater<int>());
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                cout << odd[0] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
        return;
    }
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    if (odd.size() == 2 && even.size() == 1) {
        cout << odd[0] << " " << odd[0] + even[0] << " " << "0\n";
        return;
    }
    int a = 0, b = 0;
    ans.push_back(odd[b]);
    ans.push_back(even[a] + odd[b]);
    a++;
    b++;
    while (a < even.size()) {
        ans.push_back(ans.back() + even[a++]);
    }
    int aSize = ans.size();
    ans.resize(n);
    if (aSize == n) {
        for (const auto i : ans) cout << i << " ";
        cout << "\n";
        return;
    }
    while (aSize != n) {
        ans[aSize] = ans[aSize - 2];
        aSize++;
    }
    for (const auto i : ans) cout << i << " ";
    cout << "\n";
}
//Hi Stalker
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