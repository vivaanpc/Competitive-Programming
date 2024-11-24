#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        int tempCount = 1;
        for (int j = i; j < n - 1; j++) {
            if (v[j] >= v[j + 1]) {
                tempCount++;
            } else {
                break;
            }
        }
        for (int j = i; j > 0; j--) {
            if (v[j] >= v[j - 1]) {
                tempCount++;
            } else {
                break;
            }
        }
        maxi = max(maxi, tempCount);
    }
    cout << maxi;
    return 0;
}