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
    vector<int> v(26, 0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        v[s[i] - 'A']++;
    }
    int count = 0, idx = -1;
    for (int i = 0; i < 26; i++) {
        if (v[i] % 2 != 0) {
            count++;
            idx = i;
        }
    }
    if (count > 1) {
        cout << "NO SOLUTION";
        return;
    }
    vector<char> ans(s.length());
    int index = 0, n = s.length();
    if (count == 1) {
        ans[n / 2] = char('A' + idx);
        v[idx]--;
    }
    for (int i = 0; i < 26; i++) {
        if (v[i] > 0) {
            while (v[i] != 0) {
                ans[index] = ans[n - index - 1] = char('A' + i);
                index++;
                v[i] -= 2;
            }
        }
    }
    for (char& c : ans) cout << c;
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