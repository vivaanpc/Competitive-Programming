#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int i = 0, j = 0;
        auto flag = [&](int x, int y) -> bool {
            set<int> unique;
            set<int> dist;
            for (int j = y; j <= y + 2; j++) {
                int sum = 0;
                for (int i = x; i <= x + 2; i++) {

                    sum += grid[i][j];
                }
                unique.insert(sum);
            }
            if (unique.size() != 1) return false;

            for (int i = x; i <= x + 2; i++) {
                int sum = 0;
                for (int j = y; j <= y + 2; j++) {
                    if (grid[i][j] > 9 || grid[i][j] < 1)
                        return false;
                    dist.insert(grid[i][j]);
                    sum += grid[i][j];
                }
                unique.insert(sum);
            }
            if (dist.size() != 9) return false;
            if (unique.size() != 1)
                return false;

            int i = x, j = y;
            int sum = 0;
            while (i <= x + 2 && j <= y + 2) {
                sum += grid[i][j];
                i++, j++;
            }
            unique.insert(sum);
            if (unique.size() != 1) return false;

            i = x, j = y + 2;
            sum = 0;
            while (i <= x + 2 && j >= y) {
                sum += grid[i++][j--];
            }

            unique.insert(sum);
            return unique.size() == 1;
        };

        while (i + 2 < n) {
            j = 0;
            while (j + 2 < m) {
                ans += flag(i, j);
                j++;
            }
            i++;
        }
        return ans;
    }
};