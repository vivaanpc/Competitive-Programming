#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1 = binarySearch(nums, target, true);
        int ans2 = binarySearch(nums, target, false);
        return {ans1, ans2};
    }
    int binarySearch(vector<int>& nums, int target, bool check) {
        int low = 0;
        int high = nums.size() - 1;
        int index = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) {
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                index = mid;
                if (check) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        return index;
    }
};