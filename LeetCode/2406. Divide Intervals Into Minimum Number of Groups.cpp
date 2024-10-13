#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int minGroups(vector<vector<int>>& intervals) {
		vector<int> starting, ending;
		for (auto interval : intervals) {
			starting.push_back(interval[0]);
			ending.push_back(interval[1]);
		}
		sort(starting.begin(), starting.end());
		sort(ending.begin(), ending.end());
		int end_ptr = 0, count = 0;
		for (int start : starting) {
			if (start > ending[end_ptr]) {
				end_ptr++;
			} else {
				count++;
			}
		}
		return count;
	}
};