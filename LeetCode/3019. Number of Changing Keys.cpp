#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int countKeyChanges(string s) {
		s[0] = tolower(s[0]);
		int count = 0;
		for (int i = 0; i < s.length() - 1; i++) {
			s[i + 1] = tolower(s[i + 1]);
			if (s[i] != s[i + 1]) {
				count++;
			}
		}
		return count;
	}
};