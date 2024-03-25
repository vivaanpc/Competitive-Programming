#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, x, max;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		max = arr[0];
		for (int j = 0; j < n - 1; j++) {
			if (arr[j + 1] - arr[j] > max) {
				max = arr[j + 1] - arr[j];
			}
		}
		if (2 * (x - arr[n - 1]) > max) {
			max = 2 * (x - arr[n - 1]);
		}
		cout << max << endl;
	}
	return 0;
}