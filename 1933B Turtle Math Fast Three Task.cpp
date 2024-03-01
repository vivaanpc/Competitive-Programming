#include <bits/stdc++.h>
using namespace std;
int main() {
	int t, n, sum, div1, div2;
	cin >> t;
	for (int i = 0; i < t; i++) {
		sum = 0, div1 = 0, div2 = 0;
		cin >> n;
		int arr[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum += arr[j];
			if (arr[j] % 3 == 1) {
				div1++;
			}
			if (arr[j] % 3 == 2) {
				div2++;
			}
		}
		if (sum % 3 == 0) {
			cout << "0\n";
		}
		else if (sum % 3 == 1) {
			if (div1 > 0) {
				cout << "1\n";
			}
			else if (div1 % 3 == 0 && div2 % 3 == 0) {
				cout << "1\n";
			}
			else {
				cout << "2\n";
			}
		}
		else {
			if (div2 > 0) {
				cout << "1\n";
			}
			else if (div2 % 3 == 0 && div1 % 3 == 2) {
				cout << "1\n";
			}
			else {
				cout << "2\n";
			}
		}
	}
	return 0;
}