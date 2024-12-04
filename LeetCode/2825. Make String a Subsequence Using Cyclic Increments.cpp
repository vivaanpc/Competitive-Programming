#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int s1Len = str1.size(), s2Len = str2.size();
        char targetChar = str2[0];
        int s1Idx, s2Idx;
        for (s1Idx = 0, s2Idx = 0; (s1Idx < s1Len) && (s2Idx < s2Len); s1Idx++) {
            char s1Char = str1[s1Idx];
            if (s1Char == targetChar || s1Char + 1 == targetChar || (s1Char == 'z' && targetChar == 'a')) {
                targetChar = str2[++s2Idx];
            }
        }
        return s2Idx == s2Len;
    }
};