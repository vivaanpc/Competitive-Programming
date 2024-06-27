#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int maximum = 0;
	for (int i = 0; i < n; i++) {
		int count = 1;
		while (i < n - 1 && arr[i] <= arr[i + 1]) {
			i++;
			count++;
		}
		maximum = max(count, maximum);
	}
	cout << maximum;
	return 0;
}
