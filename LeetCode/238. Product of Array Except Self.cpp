#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);  // Initialize the output array with 1s

        int left = 1;
        for (int i = 0; i < n; ++i) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= right;
            right *= nums[i];
        }
        return output;
    }
};