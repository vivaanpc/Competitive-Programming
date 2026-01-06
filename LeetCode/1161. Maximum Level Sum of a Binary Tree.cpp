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
//Definition for a binary tree node. Comment out
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
class Solution {
public:
    vector<int> sum = {INT_MIN};
    void dfs(TreeNode* Node, int level = 1) {
        if (Node == NULL) return;
        if ((int)sum.size() == level) sum.push_back(Node -> val);
        else sum[level] += Node -> val;
        dfs(Node -> left, level + 1);
        dfs(Node -> right, level + 1);
    }
    int maxLevelSum(TreeNode* root) {
        dfs(root);
        return max_element(sum.begin(), sum.end()) - sum.begin();

    }
};