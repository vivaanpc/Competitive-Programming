#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                int c = i * i + j * j;
                if ((int)sqrt(c) == (double)sqrt(c) && sqrt(c) <= n) {
                    if (i != j) {
                        ans++;
                    }
                    ans++;
                }
            }
        }
        return ans;
    }
};