#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        vector<int> suffix(satisfaction.size());
        suffix[satisfaction.size() - 1] = satisfaction[satisfaction.size() - 1];
        for (int i = satisfaction.size() - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + satisfaction[i];
        }
        int index = -1;
        for (int i = 0; i < satisfaction.size(); i++) {
            if (suffix[i] >= 0) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            return 0;
        }
        ll sum = 0;
        int count = 1;
        for (int i = index; i < satisfaction.size(); ++i) {
            sum += satisfaction[i] * count;
            count++;
        }
        return sum;
    }
};