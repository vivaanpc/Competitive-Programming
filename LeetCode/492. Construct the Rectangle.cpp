#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> constructRectangle(int area) {
		int sqrt_area = sqrt(area);
		while (area % sqrt_area != 0) {
			sqrt_area--;
		}
		return {area / sqrt_area, sqrt_area};
	}
};