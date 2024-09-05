#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int a;
		cin >> a;
		char arr[a][4];
		for (int i = 0; i < a; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = a - 1; i >= 0; --i)
		{
			for (int j = 0; j < 4; ++j)
			{
				if (arr[i][j] == '#') {
					cout << j + 1 << " ";
				}
			}
		}
		cout << endl;

	}
}