#include<bits/stdc++.h>
//vivaanpc
using namespace std;
//Definition for singly-linked list. Do NOT copy struct in soln
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};