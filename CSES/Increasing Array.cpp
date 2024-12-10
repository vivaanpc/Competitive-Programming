#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	long long count = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (i >= 1) {
			if (v[i] < v[i - 1]) {
				count += v[i - 1] - v[i];
				v[i] = v[i - 1];
			}
		}
	}
	cout << count;
	return 0;
}