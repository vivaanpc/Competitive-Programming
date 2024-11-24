#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& v) {
        long long smallest = LLONG_MAX;
        long long sum = 0;
        long long count = 0;
        for (int row = 0; row < v.size(); row++) {
            for (int col = 0; col < v[row].size(); col++) {
                if (v[row][col] < 0) {
                    sum += (-1) * v[row][col];
                } else {
                    sum += v[row][col];
                }
                //sum
                if (v[row][col] < 0) {
                    count++;
                }
                //counter
                if (abs(v[row][col]) < smallest) {
                    smallest = abs(v[row][col]);
                }
                //counting smallest
            }
        }
        if (count % 2 == 0) { //if equal number of -ve nums then no problem
            return sum;
        } else { //if odd, subtract the smallest value twice from total sum
            return sum -  (2 * abs(smallest));
        }
    }
};