#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	ll numOfHours(vector<int>& piles, int n) {
		ll sum = 0;
		for (int i = 0; i < piles.size(); i++) {
			sum += ceil(double(piles[i]) / n);
		}
		return sum;
	}
	int minEatingSpeed(vector<int>& piles, int h) {
		int high = *max_element(piles.begin(), piles.end());
		int low = 1;
		// cout << high;
		while (low <= high) {
			int mid = low + (high - low) / 2;
			ll sum = numOfHours(piles, mid);
			if (sum <= h) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		return low;
	}
};