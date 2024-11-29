#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
	bool rotateString(string s, string goal) {
		if (s.length() != goal.length()) {
			return false;
		}
		return (s + s).find(goal) != string::npos;
	}
};