#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') zero++;
        if (s[i] == '1') one++;
        if (s[i] == '2') two++;
    }
    vector<char> v(n, '+');
    int i = 0;
    for (i = 0; zero > 0; i++) {
        v[i] = '-';
        zero--;
    }
    int j = n - 1;
    for (; one > 0; j--) {
        v[j] = '-';
        one--;
    }
    if (two >= j - i + 1) {
        while (i <= j) {
            v[i] = '-';
            i++;
        }
    } else {
        while (two--) {
            v[i] = '?';
            i++;
            v[j] = '?';
            j--;
        }
    }
    for (auto& i : v) cout << i;
    cout << "\n";
}
//vivaanpc
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}