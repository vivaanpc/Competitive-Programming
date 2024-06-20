#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> Laptops;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		Laptops.push_back(make_pair(a, b));
	}
	sort(Laptops.begin(), Laptops.end());
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (Laptops[i + 1].second < Laptops[i].second) {
			flag = false;
		}
	}
	if (flag) {
		cout << "Poor Alex";
	} else {
		cout << "Happy Alex";
	}
}