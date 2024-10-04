#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
    long long n;
    cin >> n;
    vector<long long>arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i < n - 2) {
            sum += arr[i];
        }
    }
    cout << sum + arr[n - 1] - arr[n - 2] << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}