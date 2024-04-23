#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0, max = nums.size() - 1;
        while (min <= max) {
            int mid = (min + max) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[min] <= nums[mid]) {
                if (nums[min] <= target && target < nums[mid]) {
                    max = mid - 1;
                }
                else {
                    min = mid + 1;
                }
            }
            else {
                if (nums[mid] < target && target <= nums[max]) {
                    min = mid + 1;
                }
                else {
                    max = mid - 1;
                }
            }
        }
        return -1;
    }
};