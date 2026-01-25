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
	int minimumPrefixLength(vector<int>& v) {
		int i = v.size() - 1;
		for (; i > 0; i--) {
			if (v[i - 1] >= v[i]) {
				break;
			}
		}
		if (i == 0) return 0;
		return i;
	}
};