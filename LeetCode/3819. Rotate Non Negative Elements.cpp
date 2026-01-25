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
	vector<int> rotateElements(vector<int>& v, int k) {
		vector<int> nw, idx;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] >= 0) {
				nw.push_back(v[i]);
				idx.push_back(i);
			}
		}
		int sz = nw.size();
		if (sz == 0) return v;
		k %= sz;
		if (k == 0) return v;
		int j = k;
		for (int i = 0; i < sz; i++) {
			v[idx[i]] = nw[j++ % sz];
		}
		return v;
	}
};