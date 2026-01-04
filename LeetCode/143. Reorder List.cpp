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
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };
class Solution {
public:
    ListNode* reverseL(ListNode* head) {
        if (head == nullptr || head -> next == nullptr) return head;
        ListNode* newHead = reverseL(head -> next);
        head -> next -> next = head;
        head -> next = nullptr;
        return newHead;
    }
    void reorderList(ListNode* head) {
        if (head == nullptr || head -> next == nullptr) return;
        ListNode dummy;
        dummy.next = head;
        ListNode* first = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast -> next != nullptr) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* curr = reverseL(slow -> next);
        slow -> next = nullptr;
        ListNode* second = curr;
        while (second) {
            ListNode* t1 = first->next;
            ListNode* t2 = second->next;
            first->next = second;
            second->next = t1;
            first = t1;
            second = t2;
        }
    }
};