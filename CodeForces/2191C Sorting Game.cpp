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
    string s;
    cin >> s;
    int zeroCount = 0, oneCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') oneCount++;
        else zeroCount++;
    }
    if (oneCount == n || zeroCount == n || is_sorted(s.begin(), s.end())) {
        cout << "Bob\n";
        return;
    }
    vector<int> ans;
    for (int i = 0; i < zeroCount; i++) {
        if (s[i] == '1') {
            ans.push_back(i + 1);
        }
    }
    for (int i = zeroCount; i < n; i++) {
        if (s[i] == '0') ans.push_back(i + 1);
    }
    cout << "Alice\n" << ans.size() << "\n";
    for (auto& i : ans) cout << i << " ";
    cout << "\n";
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