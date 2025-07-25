#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        findCombination(0, target, candidates, res, ds);
        return res;
    }
    void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans,
                         vector<int>& ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        if (ind >= arr.size() || target < 0) {
            return; //if index is out of bounds or arr[index] reduced target to -ve
        }
        if (arr[ind] <= target) { //we pick the index
            ds.push_back(arr[ind]);
            findCombination(ind, target - arr[ind], arr, ans, ds); //keep picking
            ds.pop_back(); //removing pick
        }
        findCombination(ind + 1, target, arr, ans, ds);//moving onto next index
    }
};