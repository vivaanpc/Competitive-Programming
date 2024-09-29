#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort (a.begin(), a.end());
    bool win = true;
    for (int i = 0; i < n; i += 2) {
      if (i == n - 1 || a[i] != a[i + 1]) {
        win = false;
        break;
      }
    }
    cout << (win ? "NO" : "YES") << '\n';
  }
  return 0;
}