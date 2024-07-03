#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> c;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            c.insert(s[i]);
            ans += (int) c.size();
        }
        cout << ans << '\n';
    }
    return 0;
}