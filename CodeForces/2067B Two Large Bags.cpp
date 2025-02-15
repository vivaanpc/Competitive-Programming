#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 2, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 1) {
            cout << "NO\n";
            return;
        }
        if (freq[i] > 2) { //If greater than 2; increase next value
            freq[i + 1] += freq[i] - 2;
        }
    }

    cout << "YES\n";
}
//vivaanpc
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}