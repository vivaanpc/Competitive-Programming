#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        int check = pow(num, 0.5);
        return (check * check) == num;
    }
};