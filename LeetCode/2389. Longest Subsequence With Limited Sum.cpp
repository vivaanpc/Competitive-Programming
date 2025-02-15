#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	vector<int> answerQueries(vector<int>& v, vector<int>& queries) {
		sort(v.begin(), v.end());
		vector<ll> prefix(v.size());
		vector<int> ans;
		prefix[0] = v[0];
		for (int i = 1; i < prefix.size(); ++i) {
			prefix[i] = prefix[i - 1] + v[i];
		}
		for (auto i : queries) {
			int index = upper_bound(prefix.begin(), prefix.end(), i) - prefix.begin();
			ans.push_back(index);
		}
		return ans;
	}
};