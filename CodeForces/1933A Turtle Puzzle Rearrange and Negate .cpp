#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, sum;
	cin >> t;
	for (int i = 0; i < t; i++) {
		sum = 0;
		cin >> n;
		int arr[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + n);
		for (int z = 0; z < n; z++) {
			if (arr[z] < 0) {
				sum += -1 * arr[z];
			} else {
				sum += arr[z];
			}
		}
		cout << sum << "\n";
	}
	return 0;
}