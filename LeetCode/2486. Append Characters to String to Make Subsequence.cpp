#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int appendCharacters(string s, string t) {
		int sIndex = 0, tIndex = 0;
		int sLength = s.length(), tLength = t.length();
		while (sIndex < sLength && tIndex < tLength) {
			if (s[sIndex] == t[tIndex]) {
				tIndex++;
			}
			sIndex++;
		}
		return tLength - tIndex;
	}
};