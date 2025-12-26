#include<bits/stdc++.h>
//vivaanpc
using namespace std;
// #ifndef ONLINE_JUDGE
// #include "algo/debug.h"
// #else
// #define debug(...) 42
// #endif
//vivaanpc
typedef long long ll;
const int mod = 1e9 + 7;
const double eps = 1e-12;
// Definition for singly-linked list. Comment out
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* trav = head;
        while (trav != NULL && trav -> next != NULL) {
            if (trav -> val == trav -> next -> val) {
                ListNode* temp = trav -> next;
                while (temp -> next != NULL && temp -> val == temp -> next -> val) {
                    temp = temp -> next;
                }
                trav -> next = temp;
            } else {
                trav = trav -> next;
            }
        }
        return head;
    }
};