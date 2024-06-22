#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int minOperations(vector<int>& nums) {
		int counter = 0;
		int needsFlip = 0;
		for (int i = 0; i < nums.size(); i++) {
			if ((nums[i] == 0 && needsFlip % 2 == 0) || (nums[i] == 1 && needsFlip % 2 == 1)) {
				needsFlip++;
				counter++;
			}
		}
		return counter;
	}
};