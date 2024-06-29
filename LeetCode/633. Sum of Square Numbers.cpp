#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool judgeSquareSum(int c) {
		if (c == 0) {
			return true;
		}
		for (long long a = 0; a * a <= c; a++) {
			double b = sqrt(c - a * a);
			if (b == int(b)) {
				return b;
			}
		}
		return false;
	}
};