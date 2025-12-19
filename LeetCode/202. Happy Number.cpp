#include<bits/stdc++.h>
//vivaanpc
using namespace std;
#ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
//vivaanpc
typedef long long ll;
class Solution {
public:
    int digit_sum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n == 1)
            return true;

        map<int, int> m;
        m[n]++;
        while (true) {
            n = digit_sum(n);
            if (m[n] > 0)
                break ;
            else if (n == 1)
                return true;
            m[n]++;
        }
        return false;
    }
};