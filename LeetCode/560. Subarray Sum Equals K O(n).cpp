#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        int n = v.size();
        int prefix[n];
        prefix[0] = v[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = v[i] + prefix[i - 1];
        }
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (prefix[i] == k) {
                ans++;
            }
            //find difference in map
            if (mp.find(prefix[i] - k) != mp.end()) {
                ans += mp[prefix[i] - k];
            }
            mp[prefix[i]]++;
        }
        return ans;
    }
};
int main() {
    std::vector<int> v = {1, -1, 0};
    int k = 0;
    Solution soln;
    int ans = soln.subarraySum(v, k);
    cout << ans;
}