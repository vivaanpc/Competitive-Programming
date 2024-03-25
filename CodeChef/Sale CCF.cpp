#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int n;
	while (t--) {
		cin >> n;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sum += arr[n - 1];
		int max = sum;
		for (int j = n - 2; j >= 0; j++) {
			sum = sum + arr[j] - 2 * arr[j + 1];
			if (sum >= max) {
				max = sum;
			}
		}
		cout << max << "\n";
	}
	return 0;
}