#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        int idx = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s.count(nums[i])) {
                idx = i;
                break;
            }
            s.insert(nums[i]);
        }
        if (idx == -1) return 0;
        return (idx / 3) + 1;
    }
};