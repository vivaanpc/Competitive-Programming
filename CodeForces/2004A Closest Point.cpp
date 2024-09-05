#include<bits/stdc++.h>
using namespace std;
void display() {

}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}
		if (n == 2) {
			if (abs(v[1] - v[0]) > 1) {
				cout << "YES" << endl;
			} else { //vivaanpc
				cout << "NO" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
	}
	//vivaanpc
}