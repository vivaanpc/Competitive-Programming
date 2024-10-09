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
		int a, b;
		cin >> a >> b;
		cout << (b - a % b) % b << "\n";
	}
}