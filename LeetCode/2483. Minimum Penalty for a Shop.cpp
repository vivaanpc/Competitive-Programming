#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int bestClosingTime(string customers) {
		int maxScore = 0, score = 0, bestHour = -1;
		for (int i = 0; i < customers.size(); ++i) {
			score += (customers[i] == 'Y') ? 1 : -1;
			if (score > maxScore) {
				maxScore = score;
				bestHour = i;
			}
		}
		return bestHour + 1;
	}
};