#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
void solve() {
  int n;
  cin >> n;
  std::vector<int> v(n);
  long long sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    sum += v[i];
  }
  if (n <= 2) {
    cout << -1 << "\n";
    return;
  }
  sort(v.begin(), v.end());
  /*We need a[j]<(s+x)/(2∗n), where s is the original total wealth before x gold from the pot was added. Rearranging the equation gives x > (2 ∗ n ∗ a[j] − s). Because x
  is a non-negative integer, we arrive at the answer max(0,2∗n∗aj−s+1). btw j = n / 2.
  */
  cout << max(0LL, 2LL * n * v[n / 2] - sum + 1) << "\n";
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