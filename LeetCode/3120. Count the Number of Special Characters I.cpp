#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int numberOfSpecialChars(string word) {
		int ans = 0;
		for (char z = 'a'; z <= 'z'; z++) {
			if (word.find(toupper(z)) != string::npos && word.find(z) != string::npos) {
				ans++;
			}
		}
		return ans;
	}
};