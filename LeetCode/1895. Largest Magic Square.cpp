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
	int largestMagicSquare(vector<vector<int>>& grid) {
		int n = grid.size(), m = grid[0].size();
		vector<vector<ll>> col(grid.size(), vector<ll> (grid[0].size(), 0));
		vector<vector<ll>> row(grid.size(), vector<ll> (grid[0].size(), 0));
		vector<vector<ll>> diag(grid.size(), vector<ll> (grid[0].size(), 0));
		for (int i = 0; i < n; i++) {
			row[i][0] = grid[i][0];
			diag[i][0] = grid[i][0];
		}
		for (int i = 0; i < m; i++) {
			col[0][i] = grid[0][i];
			diag[0][i] = grid[0][i];
		}
		for (int i = 1; i < n; i++) {
			row[i][0] = row[i - 1][0] + grid[i][0];
		}
		for (int i = 1; i < n; i++) {
			row[i][0] = row[i - 1][0] + grid[i][0];
		}
		for (int i = 1; i < n; i++) {
			for (int j = 1; j < m; j++) {
				row[i][j] = 0LL + grid[i][j] + row[i][j - 1];
				col[i][j] = 0LL + grid[i][j] + col[i - 1][j];
				diag[i][j] = 0LL + grid[i][j] + diag[i - 1][j - 1];
			}
		}
		auto check = [&] (int i, int j, int len) -> bool {
			set<ll> st;
			st.insert(row[i][j + len] - row[i][j] + grid[i][j]);
			st.insert(col[i + len][j] - col[i][j] + grid[i][j]);
			st.insert(diag[i + len][j + len] - diag[i][j] + grid[i][j]);
			for (int k = 0; k <= len; k++) {
				st.insert(row[i + k][j + len] - row[i + k][j] + grid[i + k][j]);
				st.insert(col[i + len][j + k] - col[i][j + k] + grid[i][j + k]);
			}
			ll temp = 0, r = i, w = j + len;
			for (int b = 0; b <= len; b++) {
				temp += grid[r + b][w - b];
			}
			st.insert(temp);
			if (i == 0 && j == 0) {
				cout << "len : " << len << "\n";
				for (auto& it : st) {
					cout << it << " ";
				}
				cout <<  "\n";
			}
			return st.size() == 1 ? true : false;
		};
		int ans = 1;
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < m - 1; j++) {
				for (int k = 1; k < min (n - i, m - j); k++) {
					if (check(i, j, k)) {
						ans = max(ans, k + 1);
					}
				}
			}
		}
		return ans;
	}
};