#include<bits/stdc++.h>
using namespace std;
//vivaanpc
//trying brute force
class Solution {
public:
	int minOperations(vector<int>& nums) {
		int counter = 0;
		for (int i = 0; i < nums.size() - 2; i++) {
			if (nums[i] == 0) {
				nums[i] = 1;
				nums[i + 1] = nums[i + 1] ^ 1;
				nums[i + 2] = nums[i + 2] ^ 1;
				counter++;
			}
		}
		int check = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] == 1) {
				check++;
			}
		}
		if (check != nums.size()) {
			return -1;
		} else {
			return counter;
		}
		return -1;
	}
};