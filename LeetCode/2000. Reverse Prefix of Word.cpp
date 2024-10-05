#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//vivaanpc
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        bool check = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == ch) {
                index = i;
                check = true;
                break;
            }
        }
        if (check) {
            reverse(word.begin(), word.begin() + index + 1);
        }
        return word;
    }
};