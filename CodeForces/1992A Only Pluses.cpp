#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		for (int i = 0; i < 5; i++) {
			sort (arr, arr + 3);
			arr[0] += 1;
		}
		cout << arr[0] * arr[1] * arr[2] << "\n";
	}
}