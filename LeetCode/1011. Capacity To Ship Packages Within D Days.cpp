#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int countDays(vector<int>& weights, int n) {
		int days = 1, load = 0;
		for (int i = 0; i < weights.size(); i++) {
			if (weights[i] + load > n) {
				days += 1;
				load = weights[i];
			} else {
				load += weights[i];
			}
		}
		return days;
	}
	int shipWithinDays(vector<int>& weights, int days) {
		int low = *max_element(weights.begin(), weights.end());
		long long high = accumulate(weights.begin(), weights.end(), 0LL);
		while (low <= high) {
			int mid = low + (high - low) / 2;
			int countDay = countDays(weights, mid);
			if (countDay <= days) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		return low;
	}
};