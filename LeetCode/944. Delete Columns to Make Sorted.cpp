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
    int minDeletionSize(vector<string>& strs) {
        ll ans = 0;
        vector<vector<char>> grid(strs.size());
        for (int j = 0; j < strs[0].length(); j++) {
            for (int i = 0; i < strs.size() - 1; i++) {
                if (strs[i][j] > strs[i + 1][j]) {
                    ans++;
                    break;
                }
            }
        }
        return (int)ans;
    }
};
int main() {
    Solution soln;
    vector<string> v = {"a", "b"};
    cout << soln.minDeletionSize(v);
}