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
// Definition for a binary tree node. Comment out
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
    ll total = 0, ans = LLONG_MIN;
    int dfs(TreeNode* root) {
        if (!root) return 0;
        ll sum = root -> val + dfs(root -> left) + dfs(root -> right);
        ans = max(ans, sum * (total - sum));
        return sum;
    }
    int maxProduct(TreeNode* root) {
        total = dfs(root);
        dfs(root);
        return ans % mod;
    }
};