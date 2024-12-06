#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	int maxCount(vector<int>& banned, int n, int maxSum) {
		unordered_set<int> s(banned.begin(), banned.end());
		long long sum = 0;
		int count = 0;
		for (int i = 1; i <= n; i++) {
			if (s.count(i)) {
				continue;
			} else {
				sum += i;
				if (sum > maxSum) {
					break;
				} else {
					count++;
				}
			}
		}
		return count;
	}
};