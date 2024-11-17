#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		long long n, x;
		cin >> n >> x;
		vector<long long>arr(n);
		long long sum = 0;
		long long maxi = 0;
		for (int k = 0; k < n; k++)
		{
			cin >> arr[k];
			maxi = max(maxi, arr[k]);
			sum += arr[k];
		}
		long long sec = (sum + x - 1) / (long long)x;
		cout << max(maxi, sec) << endl;
	}
	return 0;
}