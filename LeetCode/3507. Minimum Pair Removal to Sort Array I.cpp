#include<bits/stdc++.h>
//vivaanpc
using namespace std;
// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
	void leftShift(vector<int>& v, int idx) {
		for (int i = idx; i < v.size() - 1; i++) {
			v[i] = v[i + 1];
		}
		v.pop_back();
	}
	void mergeMinPair(vector<int>& v) {
		int minSum = INT_MAX;
		int idx = 0;
		for (int i = 0; i < v.size() - 1; i++) {
			int sum = v[i] + v[i + 1];
			if (sum < minSum) {
				idx = i;
				minSum = sum;
			}
		}
		v[idx] = minSum;
		leftShift(v, idx + 1);
	}
	bool isSorted(vector<int>& v) {
		for (int i = 0; i < v.size() - 1; i++) {
			if (v[i] > v[i + 1]) return false;
		}
		return true;
	}

	int minimumPairRemoval(vector<int>& v) {
		int cnt = 0;
		while (!isSorted(v)) {
			mergeMinPair(v);
			cnt++;
		}
		return cnt;
	}
};