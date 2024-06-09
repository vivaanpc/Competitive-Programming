#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		bool checker = false;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 1; i++) {
			if (nums[i] == nums[i + 1]) {
				checker = true;
				break;
			}
		}
		return checker;
	}
};