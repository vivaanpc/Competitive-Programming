#include <bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0) {
            cout << "YES" << "\n";
        } else if (a % 2 != 0 || (a == 0 && b % 2 != 0)) {
            cout << "NO" << "\n";
        } else  {
            cout << "YES" << "\n";
        }
    }
}