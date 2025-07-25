#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int reverseDegree(string s) {
		int sum = 0;
		for (int i = 0; i < s.length(); ++i) {
			int Position = s[i] - 'a' + 1;
			int reversed = 27 - Position;
			sum += (i + 1) * reversed;
		}
		return sum;
	}
};