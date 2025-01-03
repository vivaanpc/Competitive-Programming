#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	pair<int, int> findMinMax(const vector<int>& nums) {
		int mini = INT_MAX, maxi = INT_MIN;
		for (const auto i : nums) {
			mini = min(mini, i);
			maxi = max(maxi, i);
		}
		return {mini, maxi};
	}
	ll findAns(const vector<int>& nums, int n) {
		ll ans = 0;
		for (int i = 0; i < nums.size(); ++i) {
			ans += ceil(double(nums[i]) / n);
		}
		return ans;

	}
	int smallestDivisor(vector<int>& nums, int threshold) {
		auto [low, high] = findMinMax(nums);
		low = 1;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			ll ans = findAns(nums, mid);
			if (ans <= threshold) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		return low;
	}
};