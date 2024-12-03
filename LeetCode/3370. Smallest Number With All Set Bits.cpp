#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int smallestNumber(int n) {
		int bit = log2(n) + 1;
		int ans = (1 << bit) - 1;
		return ans;
	}
};