#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int maxContainers(int n, int w, int mw) {
		return min(n * n, mw / w);
	}
};