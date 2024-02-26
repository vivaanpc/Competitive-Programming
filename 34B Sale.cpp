#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int z = 0; z < n - 1; z++) {
		for (int j = 0; j < n - z - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	int sum = 0;
	for (int a = 0; a < k && arr[a] < 0; a++) {
		arr[a] *= -1;
		sum += arr[a];
	}
	cout << sum;
}