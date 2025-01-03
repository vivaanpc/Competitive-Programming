#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	pair<int, int> findMinMax(const vector<int>& bloomDay) {
		int mini = INT_MAX, maxi = INT_MIN;
		for (int i = 0; i < bloomDay.size(); i++) {
			mini = min(mini, bloomDay[i]);
			maxi = max(maxi, bloomDay[i]);
		}
		return {mini, maxi};
	}
	ll countDays (const vector<int>& bloomDay, int m, int k) {
		ll ans = 0, temp = 0;
		for (int i = 0; i < bloomDay.size(); i++) {
			if (bloomDay[i] <= m) {
				temp++;
			} else {
				ans += temp / k;
				temp = 0;
			}
		}
		ans += temp / k;
		return ans;
	}
	int minDays(vector<int>& bloomDay, int m, int k) {
		if (bloomDay.size() < 1LL * m * k) {
			return -1;
		}
		auto [low, high] = findMinMax(bloomDay);
		// int count = 0;
		// cout << low << " " << high << endl;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			// cout << mid << " ";
			ll count = countDays(bloomDay, mid, k);
			// cout << count << " ";
			if (count >= m) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		// cout << endl;
		return low;
	}
};