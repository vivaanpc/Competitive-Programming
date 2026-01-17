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
    vector<int> twoSum(vector<int>& v, int target) {
        int i = 0, j = v.size() - 1;
        while (i < j) {
            if (v[i] + v[j] == target) {
                return {i + 1, j + 1};
            }
            if (v[i] + v[j] > target) {
                j--;
                continue;
            }
            i++;
        }
        return {i + 1, j + 1};
    }
};