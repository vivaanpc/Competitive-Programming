#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, count;
	string s;
	cin >> t;
	for (int i = 0; i < t ; ) {
		count = 0;
		cin >> n >> s;
		for (int j = 0; j < n; j++) {
			if (s[j] == 'm' && s[j + 1] == 'a' && s[j + 2] == 'p' && s[j + 3] == 'i' && s[j + 4] == 'e') {
				count++;
				i += 5;
			}
			else if (s[j] == 'm' && s[j + 1] == 'a' && s[j + 2] == 'p') {
				count++;
				i += 3;
			}
			else if (s[j] == 'p' && s[j + 1] == 'i' && s[j + 2] == 'e') {
				count++;
				i += 3;
			}
			else {
				i++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}