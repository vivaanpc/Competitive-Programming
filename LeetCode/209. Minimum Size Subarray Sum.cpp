#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int minSubArrayLen(int target, vector<int>& nums) {
		int length = INT_MAX;
		int low = 0;
		ll currentSum = 0;
		for (int i = 0; i < nums.size(); ++i) {
			currentSum += nums[i]; //right side of windows
			while (currentSum >= target) {
				if (i - low + 1 < length) { //shorter length
					length = i - low + 1;
				}
				currentSum -= nums[low];
				low++; //left side updated
			}
		}
		return ((length == INT_MAX) ? 0 : length);
	}
};