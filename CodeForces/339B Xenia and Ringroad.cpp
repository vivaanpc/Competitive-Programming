#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1);
    a[0] = 1;
    for (int i = 1; i <= m; i++) {
        cin >> a[i];
    }
    long long ans = 0;
    for (int i = 1; i <= m; i++) {
        int d = (a[i] - a[i - 1] + n) % n;
        ans += d;
    }
    cout << ans << "\n";
    return 0;
}