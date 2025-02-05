#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int maxAscendingSum(vector<int>& nums) {
		ll sum  = 0;
		ll temp = 0;
		if (nums[0] < nums[1]) {
			temp += nums[0];
		}
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] > nums[i - 1]) {
				temp += nums[i];
				sum = max(temp, sum);
			} else {
				temp = nums[i];
			}
		}
		return 0;
	}
};