#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (auto& i : v) {
        cin >> i;
        s.insert(i);
    }
    cout << s.size() * 2 - 1 << "\n";
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