#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int findMin(vector<int>& nums) {
		int left = 0;
		int right = nums.size() - 1;
		int ans = INT_MAX;
		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (nums[mid] >= nums[left]) {
				ans = min(nums[left], ans);
				left = mid + 1;
			} else {
				ans = min(ans, nums[mid]);
				right = mid - 1;
			}
		}
		return ans;
	}
};