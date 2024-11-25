#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		//prefix sum + binary search
		vector<long long> prefix(nums.size());
		prefix[0] = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			prefix[i] = prefix[i - 1] + nums[i];
		}

		int ans = -1;
		for (int i = 0; i < nums.size(); i++) {
			if (i == 0) {
				if (prefix[nums.size() - 1] - prefix[0] == 0) {
					return 0;
				}
				continue;
			}
			if (i == nums.size() - 1) {
				if (prefix[nums.size() - 2] == 0) {
					return nums.size() - 1;
				}
				continue;
			}
			if ((prefix[i - 1]) == (prefix[nums.size() - 1] - prefix[i])) {
				cout << (prefix[i + 1] - prefix[i]) << endl;
				return i;
			}
		}
		return ans;
	}
};