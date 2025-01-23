#include<bits/stdc++.h>
//vivaapc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
	int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
		int sum = 0;
		for (int i = 0; i < customers.size(); ++i) {
			if (i < minutes) {
				sum += customers[i];
			} else {
				sum += (grumpy[i] ^ 1) ? customers[i] : 0;
			}
			// cout << "sum : "<< sum << "\n";
		}
		int tempsum = sum;
		for (int i = minutes; i < customers.size(); i++) {
			if (grumpy[i] == 1) {
				tempsum += customers[i];
			}
			// cout << "tempsum after adding " << tempsum << endl;
			if (grumpy[i - minutes]) {
				tempsum -= customers[i - minutes];
			}
			// cout << "tempsum after subtracting " << tempsum << endl;

			sum = max(sum, tempsum);
			// cout << "tempsum : " << tempsum << "\n";
			// cout << i - minutes << " " << i << "\n";
			// cout << customers[i - minutes] << " " << customers[i] << "\n";
			// cout << grumpy[i - minutes] << " " << grumpy[i] <<  "\n";
		}
		return sum;
	}
};