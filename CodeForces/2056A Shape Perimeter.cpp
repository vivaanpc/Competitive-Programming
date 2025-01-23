#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
void solve() {
	int m, n;
	cin >> m >> n;
	int area = n * 4;
	int currentX, currentY;
	for (int i = 0; i < m; i++) {
		if (i == 0) {
			cin >> currentX >> currentY;
			continue;
		}
		int temp1, temp2;
		cin >> temp1 >> temp2;
		int oldX = currentX, oldY = currentY;
		currentX = currentX + temp1;
		currentY = currentY + temp2;
		area += n * 4 - (oldX + n - currentX) * 2 - (n + oldY - currentY) * 2;
	}
	cout << area << '\n';
}
//vivaanpc
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}