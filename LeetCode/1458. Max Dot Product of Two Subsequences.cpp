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
const int NegInf = -1e9;
class Solution {
public:
	vector<int> x, y;
	vector<vector<int>> grid;
	int n, m;
	int solve(int i, int j) {
		if (i == n || j == m)
			return NegInf;
		if (grid[i][j] != INT_MIN)
			return grid[i][j];

		int take = x[i] * y[j];
		int fina = max({take + solve(i + 1, j + 1), take, solve(i + 1, j), solve(i, j + 1)});
		return grid[i][j] = fina;
	}
	int maxDotProduct(vector<int>& a, vector<int>& b) {
		x = a;
		y = b;
		n = x.size();
		m = y.size();
		grid.assign(n, vector<int>(m, INT_MIN));
		return solve(0, 0);
	}
};