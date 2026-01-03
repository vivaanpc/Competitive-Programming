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
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reversal(ListNode* head) {
        if (head == nullptr || head -> next == nullptr) return head;
        ListNode* newHead = reversal(head -> next);
        head -> next -> next = head;
        head -> next = nullptr;
        return newHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }
        ListNode* start = prev->next;
        ListNode* end = start;
        for (int i = left; i < right; i++) {
            end = end->next;
        }
        ListNode* after = end->next;
        end->next = nullptr;
        prev->next = reversal(start);
        start->next = after;
        return dummy.next;
    }
};