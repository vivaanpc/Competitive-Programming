#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < 2 * n - 2; i++) {
        string s;
        cin >> s;
        if (s.size() == n - 1) {
            a.push_back(s);
        }
    }
    if (a[0] == string(a[1].rbegin(), a[1].rend())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}