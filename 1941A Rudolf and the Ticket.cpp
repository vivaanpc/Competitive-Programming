#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n , m, k, count;
	cin >> t;
	for (int i = 0; i < t; i++) {
		count = 0;
		cin >> n >> m >> k;
		int arr1[n], arr2[m];
		for (int a = 0; a < n; a++) {
			cin >> arr1[a];
		}
		for (int b = 0; b < m; b++) {
			cin >> arr2[b];
		}
		for (int w = 0; w < n; w++) {
			for (int y = 0; y < m; y++) {
				if (arr1[w] + arr2[y] <= k) {
					count++;
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}