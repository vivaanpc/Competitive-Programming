#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for (int i = 0; i < chalk.size(); i++) {
            sum += chalk[i];
        }
        sum = k % sum;
        long long ans = 0;
        for (int i = 0; i < chalk.size(); i++) {
            sum -= chalk[i];
            if (sum == 0) {
                ans = i + 1;
                break;
            }
            if (sum < 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
};