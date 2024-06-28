#include<bits/stdc++.h>
using namespace std;
//vivaanpc
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) {
      cin >> s[i];
    }
    long long sumX = 0;
    long long sumY = 0;
    long long count = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (s[i][j] == '#') {
          sumX += i;
          sumY += j;
          count += 1;
        }
      }
    }
    cout << sumX / count + 1 << " " << sumY / count + 1 << '\n';
  }
  return 0;
}