#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        if (k <= n) {
            if ((n % k) == 0) {
                cout << 1;
            }
            else {
                cout << 2;
            }
        }
        else if (n < k) {
            if ((k % n) == 0) {
                cout << k / n;
            }
            else {
                cout << (k / n) + 1;
            }
        }
        cout << endl;
    }
}