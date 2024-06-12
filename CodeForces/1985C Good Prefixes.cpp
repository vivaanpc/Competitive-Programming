#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, count = 0;
		cin >> n;
		long long prefix_sum = 0, maximum = 0;
		vector<long long> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			prefix_sum += arr[i];
			if (arr[i] > maximum) {
				maximum = max (maximum, arr[i]);
				if (prefix_sum - arr[i] == arr[i]) {
					count++;
				}
			}
			else {
				if (prefix_sum - maximum == maximum) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}