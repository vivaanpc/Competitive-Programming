#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    int minSteps(int n) {
        if (n == 1) return 0;
        int count = 2;
        int a = 2;
        int copy = 1;
        while (a != n) {
            if (n % a == 0) {
                copy = a;
                a *= 2;
                count += 2;
            }
            else{
                a += copy;
                count++;
            }
        }
        return count;
    }
};