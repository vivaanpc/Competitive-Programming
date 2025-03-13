#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		vector<int> ans(nums.size());
		int left = 0, right = nums.size() - 1;
		int place = right;
		for (; left <= right;) {
			if (abs(nums[left]) > abs(nums[right])) {
				ans[place] = nums[left] * nums[left];
				left++;
			} else {
				ans[place] = nums[right] * nums[right];
				right--;
			}
			place--;
		}
		return ans;
	}
};