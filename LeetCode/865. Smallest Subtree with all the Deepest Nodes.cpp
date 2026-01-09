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
// 	int val;
// 	TreeNode *left;
// 	TreeNode *right;
// 	TreeNode() : val(0), left(nullptr), right(nullptr) {}
// 	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// 	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
class Solution {
public:
	int maxBottom = 0;
	TreeNode* lca = NULL;
	int dfs(TreeNode* root, int depth) {
		maxBottom = max(maxBottom, depth);
		if (!root) return depth;
		int l = dfs(root -> left, depth + 1);
		int r = dfs(root -> right, depth + 1);
		if (l == maxBottom && r == maxBottom) lca = root;
		return max(l, r);
	}
	TreeNode* subtreeWithAllDeepest(TreeNode* root) {
		dfs(root, 0);
		return lca;
	}
};