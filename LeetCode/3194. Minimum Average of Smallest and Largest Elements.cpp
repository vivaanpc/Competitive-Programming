#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	double minimumAverage(vector<int>& nums) {
		sort (nums.begin(), nums.end());
		int n = nums.size();
		double check = (double(nums[0]) / 2) + double(nums[n - 1]) / 2;
		for (int i = 1, j = n - 2; i < (n / 2); i++, j--) {
			double temp = 0;
			temp += double(nums[i]) / 2;
			temp += double(nums[j]) / 2;
			check = min(check, temp);
		}
		return check;
	}
};