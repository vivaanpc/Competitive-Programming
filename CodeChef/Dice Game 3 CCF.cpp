#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int arr[t];
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < t; j++) {
		if (arr[j] == 1) {
			cout << "6\n";
		}
		else if (arr[j] % 2 == 0) {
			int w = arr[j] / 2;
			cout << 13 * w << "\n";
		}
		else {
			int w = arr[j] / 2;
			cout << 13 * w + 6 << "\n";
		}
	}
}

