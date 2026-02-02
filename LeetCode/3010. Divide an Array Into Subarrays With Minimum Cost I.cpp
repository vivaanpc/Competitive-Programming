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
    int minimumCost(vector<int>& v) {
        priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        for (int i = 1; i < v.size(); i++) {
            minHeap.push(v[i]);
        }
        int ans = v[0];
        for (int i = 0; i < 2; i++) {
            ans += minHeap.top();
            minHeap.pop();
        }
        return ans;
    }
};