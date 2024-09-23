#include <bits/stdc++.h>
using namespace std;
//vivaanpc
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int temp = n % 5;
		int count = n / 5;
		string result = "aeiou";
		for (int i = 0; i < 5; ++i)
		{
			for (int j = 0; j < count; ++j)
			{
				cout << result[i];
			}
			if (temp > 0) {
				cout << result[i];
				temp--;
			}
		}
		cout << endl;
	}
	return 0;
}