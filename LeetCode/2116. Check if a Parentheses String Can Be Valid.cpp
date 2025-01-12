#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	bool canBeValid(string s, string locked) {
		int stringLength = s.size();
		if (stringLength % 2 == 1) {
			return false;
		}
		stack<int> openIndices;
		stack<int> unlockedIndices;
		for (int i = 0; i < stringLength; i++) {
			if (locked[i] == '0') {
				unlockedIndices.push(i);
			} else if (s[i] == '(') {
				openIndices.push(i);
			} else if (s[i] == ')') {
				if (!openIndices.empty()) {
					openIndices.pop(); //hardcoded '('
				} else if (!unlockedIndices.empty()) { //special char
					unlockedIndices.pop();
				} else {
					return false; // ')' cannot be first
				}
			}
		}
		while (!openIndices.empty() && !unlockedIndices.empty() && openIndices.top() < unlockedIndices.top()) {
			openIndices.pop(); // runs as long as '(' is before ')'
			unlockedIndices.pop();
		}
		if (openIndices.empty() && !unlockedIndices.empty()) {
			return unlockedIndices.size() % 2 == 0; // even number should be left
		}
		return openIndices.empty();
	}
};