#include<bits/stdc++.h>
using namespace std;
#define range(x) (x).begin(), (x).end()
#define NFS ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, q;
void solve() {
    cin >> n >> q;
    vector<long long> a(n);
    for (auto &x : a) {
        cin >> x;
    }
    vector<long long> pref(n + 2, 0);

    while (q--) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        pref[a]++;
        pref[b + 1]--;
    }

    for (int i = 1; i <= n; i++) {
        pref[i] += pref[i - 1];
    }

    sort(a.begin(), a.end());
    sort(pref.begin(), pref.end());
    reverse(a.begin(), a.end());
    reverse(pref.begin(), pref.end());


    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * pref[i];
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}