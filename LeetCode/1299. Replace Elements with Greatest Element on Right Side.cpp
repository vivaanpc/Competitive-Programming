#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int right = -1;
        for (int i = arr.size() - 1; i >= 0; i--) {
            int index = arr[i];
            arr[i] = right;
            if (index > right) right = index;
        }
        return  arr;
    }
};