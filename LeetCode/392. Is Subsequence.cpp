#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int counter = 0;
        int sParse = 0;
        for (int i = 0; i < t.length() && sParse < s.length(); i++)
            if (t[i] == s[sParse]) {
                counter++;
                sParse++;
            }
        if (counter == s.length()) {
            return true;
        }
        return false;
    }
};