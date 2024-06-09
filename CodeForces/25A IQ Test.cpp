#include<bits/stdc++.h>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n, evenIndex = 0, oddIndex = 0, numOdd = 0, numEven = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];;
		if (arr[i] % 2 == 0) {
			evenIndex = i;
			numEven++;
		}
		else {
			oddIndex = i;
			numOdd++;
		}
	}
	if (numOdd > numEven) {
		cout << evenIndex + 1;
	}
	else {
		cout << oddIndex + 1;
	}
}