#include<bits/stdc++.h>
using namespace std;
int main() {
     int t, n, k;
     cin >> t;
     while (t--) {
          cin >> n >> k;
          bool flag = 0;
          for (int j = 0; j < n; j++) {
               int a;
               cin >> a;
               if (a == k) {
                    flag = 1;
               }
          }
          if (flag) {
               cout << "Yes\n";
          }
          else {
               cout << "No\n";
          }
     }

}