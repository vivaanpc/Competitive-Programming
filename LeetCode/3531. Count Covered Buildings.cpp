#include<bits/stdc++.h>
//vivaanpc
using namespace std;
// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int> Xmin(n + 1, n + 1);
        vector<int> Xmax(n + 1, 0);
        vector<int> Ymin(n + 1, n + 1);
        vector<int> Ymax(n + 1, 0);
        for (auto b : buildings) {
            int x = b[0];
            int y = b[1];
            Xmin[y] = min(Xmin[y], x);
            Xmax[y] = max(Xmax[y], x);
            Ymin[x] = min(Ymin[x], y);
            Ymax[x] = max(Ymax[x], y);
        }
        int ans = 0;
        for (auto b : buildings) {
            int x = b[0];
            int y = b[1];
            if (Xmin[y] < x && x < Xmax[y] && Ymin[x] < y && y < Ymax[x]) {
                ans += 1;
            }
        }
        return ans;
    }
};