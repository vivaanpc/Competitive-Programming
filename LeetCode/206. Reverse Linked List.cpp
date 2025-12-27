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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head;
        ListNode* next = head;
        // ListNode* temp = head;
        if (head == nullptr || head -> next == nullptr) return head;
        next = next -> next;
        prev -> next = nullptr;
        if (next -> next == nullptr) {
            next -> next = prev;
            return next;
        }
        curr = next;
        next = next -> next;
        while (next != nullptr) {
            cout << prev -> val << "\n";
            cout << curr -> val << "\n";
            cout << next -> val << "\n";
            curr -> next = prev;
            prev = curr;
            curr = next;
            next = next -> next;
        }
        // curr -> next = prev;
        // prev = curr;
        // curr = next;
        // next -> next = curr;
        return next;
    }
};