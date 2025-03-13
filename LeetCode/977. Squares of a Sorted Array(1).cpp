#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (auto& num : nums) {
            num *= num;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};