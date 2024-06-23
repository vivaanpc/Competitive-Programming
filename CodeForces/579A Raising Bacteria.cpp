#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k = 1;
	cin >> n;
	while (n > 1) {
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n -= 1;
			k++;
		}
	}
	cout << k;
}