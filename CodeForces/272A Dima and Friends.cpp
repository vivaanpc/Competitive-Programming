#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, sum = 0, count = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		sum += v[i];
	}
	for (int i = 1; i < 6; ++i)
	{
		if ((sum + i) % (n + 1) == 1) {
			continue;
		} else {
			count++;
		}
	}
	cout << count << "\n";
}