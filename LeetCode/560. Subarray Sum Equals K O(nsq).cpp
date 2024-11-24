#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        std::vector<long long> prefix(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        int count = 0;
        for (int i = 1; i <= nums.size(); i++) {
            if (prefix[i - 1] == k) {
                count++;
            }
            for (int j = i; j < nums.size(); ++j) {
                if (prefix[j] - prefix[j - i] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};