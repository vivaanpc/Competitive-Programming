#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x) {
		long long reverse = 0;
		long long temp = x;
		if (x < 0) {
			return false;
		}
		while (temp != 0) {
			int remainder = temp % 10;
			reverse = reverse * 10 + remainder;
			temp /= 10;
		}
		return reverse == x;
	}
};