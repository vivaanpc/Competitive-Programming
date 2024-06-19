#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
		vector<pair<int, int>> v(profit.size());
		for (int i = 0; i < profit.size(); i++) {
			v[i] = {difficulty[i], profit[i]};
		}
		int sum = 0;
		sort(v.begin(), v.end());
		for (int workerSkill : worker) {
			int left = 0, high = profit.size() - 1;
			int ans = -1;
			while (left <= high) {
				int mid = left + (high - left) / 2;
				if (v[mid].first <= workerSkill) {
					left = mid + 1;
					ans = mid;
				} else {
					high = mid - 1;
				}
			}

			int maximum = 0;
			for (int i = 0; i <= ans; i++) {
				maximum = max(maximum, v[i].second);
			}
			sum += maximum;
		}
		return sum;
	}
};
