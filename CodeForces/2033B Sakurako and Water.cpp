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
		vector<vector<int>> v(n, vector<int>(n));
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin >> v[i][j];
			}
		}
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int col = 0, mx1 = INT_MAX, mx2 = INT_MAX;
			for (int x = i; x < n; x++, col++) {
				mx1 = min(mx1, v[x][col]);
				mx2 = min(mx2, v[col][x]);
			}
			if (mx1 < 0) sum += abs(mx1);
			if (mx2 < 0) sum += abs(mx2);
		}
		int temp = INT_MAX;
		for (int i = 0 ; i < n; i++) {
			temp = min (temp, v[i][i]);
		}
		if (temp < 0) sum += temp;
		cout << sum << "\n";
	}
	return 0;
}