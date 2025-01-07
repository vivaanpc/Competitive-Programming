#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	string largestNumber(vector<int>& nums) {
		string s = "";
		std::vector<string> v(nums.size());
		for (int i = 0; i < nums.size(); i++) {
			v[i] = to_string(nums[i]);
		}
		sort(v.rbegin(), v.rend(), [](string a, string b) { return a + b < b + a;});
		if (nums[0] == '0') return "0";
		for (int i = 0; i < nums.size(); i++) {
			// cout << v[i] << " ";
			s += v[i];
		}
		return s;
	}
};