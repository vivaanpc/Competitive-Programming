#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int c1 = 1, c2 = 0;
		vector<int> a;
		set<int> s;
		for (int i = 0; i < n ; i++) {
			int temp;
			cin >> temp;
			a.push_back(temp);
			s.insert(temp);
		}
		if (s.size() == 1) {
			cout << "YES\n";
		}
		else if (s.size() > 2)  {
			cout << "NO\n";
		}
		else {
			sort(a.begin(), a.end());
			for (int i = 1; i < n; i++) {
				if (a[i] == a[0]) {
					c1++;
				}
				else {
					c2++;
				}
			}
			if (c1 == c2 || c1 == c2 + 1 || c2 == c1 + 1) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
}