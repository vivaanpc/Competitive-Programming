#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort (nums.begin(), nums.end());
        int ans = -1;
        for (int i = 0, j = nums.size() - 1; i < j; ) {
            if (-1 * (nums[i]) == nums[j]) {
                ans = nums[j];
                break;
            }
            if (-1 * (nums[i]) > nums[j]) {
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};