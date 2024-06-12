#include<bits/stdc++.h>
using namespace std;
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int q = 2, maximum = 0;
		for (int x = 2; x <= n; x++) {
			int k = n / x;
			int sum = x * (k * (k + 1)) / 2;
			if (sum > maximum) {
				maximum = sum;
				q = x;
			}
		}
		cout << q << endl;
	}
}