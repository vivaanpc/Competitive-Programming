#include <bits/stdc++.h>
//cf div 2 167
using namespace std;
//vivaanpc
int lengthChecker(string a, string b) {
	int maxLength = 0, subLength;
	int bParse;
	for (int z = 0; z < b.length(); z++) {
		bParse = z;
		subLength = 0;
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == b[bParse]) {
				bParse++;
				subLength++;
			}
		}
		maxLength = max(maxLength, subLength);
	}
	return maxLength;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		int count = b.length() - lengthChecker(a, b);
		count += a.length();
		cout << count << endl;
	}
}

