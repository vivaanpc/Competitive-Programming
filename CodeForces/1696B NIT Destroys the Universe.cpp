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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      ans += (a[i] > 0);
    }
    for (int i = 0; i < n - 1; i++) {
      ans -= (a[i] > 0 && a[i + 1] > 0);
    }
    ans = min(ans, 2);
    cout << ans << '\n';
  }
  return 0;
}