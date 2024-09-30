#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
		vector<vector<int>> ans;
		int count = 0;
		if (n * m != original.size()) {
			return ans;
		}
		vector<int> store;
		for (auto val : original) {
			store.push_back(val);
			count++;
			if (count == n) {
				count = 0;
				ans.push_back(store);
				store.clear();
			}
		}
		return ans;
	}
};