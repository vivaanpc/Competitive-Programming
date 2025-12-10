#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        int n = nums.size();
        map<ll, ll> right, left;
        for (int i = 2; i < n; i++) {
            right[nums[i]]++;
            right[nums[i]] = right[nums[i]] % mod;
        }
        left[nums[0]]++;
        ll ans = 0;
        for (int i = 1; i < n - 1; i++) {
            int x = nums[i];
            if (i != 1) {
                right[x]--;
                if (right[x] == 0) {
                    right.erase(x);
                }
            }
            if (left.count(x * 2) && right.count(x * 2)) {
                ans = (ans + (((left[x * 2] % mod) * (right[x * 2] % mod)) % mod) % mod);
            }
            left[x] = (left[x] + 1) % mod;
        }
        return int(ans % mod);
    }
};