#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, j = 0;
        cin >> a >> b;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        vector<int> arr(26, 0);
        for (int i = 0; i < a; i++) {
            j = s[i] - 97;
            arr[j]++;
        }
        int countOdd = 0;
        for (int i = 0; i < 26; i++) {
            if (arr[i] % 2 != 0 ) countOdd++;
        }
        if (countOdd <= b + 1) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}