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
	vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
		int x = center[0], y = center[1], maxPow = INT_MIN, xTow = -1, yTow = -1, idx = -1;
		for (int i = 0; i < towers.size(); i++) {
			int xTarget = towers[i][0], yTarget = towers[i][1];
			int mhtd = abs(xTarget - x) + abs(y - yTarget);
			if (mhtd <= radius) {
				if (towers[i][2] >= maxPow) {
					if (towers[i][2] == maxPow) {
						if (xTarget < xTow || (xTarget == xTow && yTarget < yTow)) {
							xTow = xTarget;
							yTow = yTarget;
							idx = i;
						}
					} else {
						idx = i;
						xTow = xTarget;
						yTow = yTarget;
						maxPow = towers[i][2];
					}
				}

			}
		}
		if (idx == -1) {
			return { -1, -1};
		}
		return {towers[idx][0], towers[idx][1]};
	}
};