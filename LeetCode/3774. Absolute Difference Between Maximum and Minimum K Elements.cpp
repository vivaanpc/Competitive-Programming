#include<bits/stdc++.h>
//vivaanpc
using namespace std;
// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if (nums.size() == 1 || nums.size() == k) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        vector<long long> prefix(nums.size());
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        return prefix[nums.size() - 1] - prefix[nums.size() - k - 1] - prefix[k - 1];
    }
};