#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	bool calculation(vector<int>& time, ll mid, int totalTrips) {
		ll ans = 0;
		for (int i = 0; i < time.size(); ++i) {
			ans += mid / time[i];
		}
		// cout << ans << totalTrips << endl;
		return ans >= totalTrips;
	}
	ll minimumTime(vector<int>& time, int totalTrips) {
		ll low = 1;
		ll high = 1e14;
		// int count = 1;
		while (low <= high) {
			ll mid = low + (high - low) / 2;
			if (calculation(time, mid, totalTrips)) {
				high = mid - 1;
				// cout << "HI\n" ;
			} else {
				low = mid + 1;
			}
		}
		return low;
	}
};