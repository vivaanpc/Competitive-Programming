#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= k) {
                k -= a[i];
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << "\n";
    }
}
