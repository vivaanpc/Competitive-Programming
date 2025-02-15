#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	double area(double Y, const vector<vector<int>>& squares) {
		double sum = 0;
		for (const auto &sq : squares) {
			int yi = sq[1], l = sq[2];
			if (Y <= yi) {
				sum += (double)l * l;
			} else if (Y >= yi + l) {
				continue;
			} else {
				sum += (double)l * ((yi + l) - Y);
			}
		}
		return sum;
	}
	double separateSquares(vector<vector<int>>& squares) {
		double totalArea = 0;
		double low = 1e9, high = -1e9;
		for (auto &sq : squares) {
			int l = sq[2];
			low = min(low, (double)sq[1]);
			high = max(high, (double)sq[1] + sq[2]);
			totalArea += l * (double)l;
		}
		double target = totalArea / 2.0;
		for (int i = 0; i < 70; i++) {
			double mid = low + (high - low) / 2.0;
			double rn = area(mid, squares);
			if (rn > target) {
				low = mid;
			} else {
				high = mid;
			}
		}
		return low;
	}
};
