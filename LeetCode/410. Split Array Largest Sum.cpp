#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    int calculateSum(vector<int>& nums, int mid) {
        int subArray = 1;
        ll sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= mid) {
                sum += nums[i];
            } else {
                subArray++;
                sum = nums[i];
            }
        }
        return subArray;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        ll high = accumulate(nums.begin(), nums.end(), 0LL);
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            int count = calculateSum(nums, mid);
            if (count > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};