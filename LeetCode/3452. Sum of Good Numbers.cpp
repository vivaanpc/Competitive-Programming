#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int sumOfGoodNumbers(vector<int>& nums, int k) {
		ll sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (i < k) {
				if (nums[i] > nums[i + k]) {
					sum += nums[i];
				}
			} else if (i > nums.size() - k - 1) {
				if (nums[i] > nums[i - k]) {
					sum += nums[i];
				}
			} else {
				if (nums[i] > nums[i - k] && nums[i] > nums[i + k]) {
					sum += nums[i];
				}
			}
		}
		return sum;
	}
};