#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string t = "hello";
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[n]) {
            n++;
        }
        if (n == 5) {
            break;
        }
    }
    if (n == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}