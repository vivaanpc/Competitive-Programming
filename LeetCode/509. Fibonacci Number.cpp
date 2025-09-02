#include<bits/stdc++.h>
using namespace std;
const int MAX_SAVE = 3;
class Solution {
public:
	int f[MAX_SAVE];
	int fib(int n) {
		f[0] = 0;
		f[1] = 1;
		for (int i = 2; i <= n; i++) {
			f[i % MAX_SAVE] = f[(i - 1) % MAX_SAVE] + f[(i - 2) % MAX_SAVE];
		}
		return f[n % MAX_SAVE];
	}
};