#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	int total = accumulate(arr.begin(), arr.end(), 0);
	int count = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		count++;
		if (sum > total - sum) {
			break;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	cout << solve(n) << endl;
	return 0;
}
