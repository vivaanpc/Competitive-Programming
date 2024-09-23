#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, b, count = 0, money = 0;
		cin >> n >> b;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		for (int i = 0; i < n; i++) {
			if (v[i] >= b) {
				money += v[i];
			} else if (v[i] == 0 && money > 0) {
				money--;
				count++;
			}
		}

		cout << count << "\n";
	}

}
