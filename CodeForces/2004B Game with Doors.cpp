#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int L, R;
        cin >> L >> R;
        int maximum = max(l, L);
        int minimum = min(r, R);
        int doors = max(0, minimum - maximum);
        if (maximum > minimum) {
            cout << 1 << "\n";
        } else {
            if (abs(l - L) > 0) doors++;
            if (abs(r - R) > 0) doors++;
            cout << doors << "\n";
        }
    }
    return 0;
}