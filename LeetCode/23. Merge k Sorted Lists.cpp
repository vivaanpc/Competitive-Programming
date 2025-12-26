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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;
        while (l1 && l2) {
            if (l1 -> val <= l2 -> val) {
                tail -> next = l1;
                l1 = l1 -> next;
            } else {
                tail -> next = l2;
                l2 = l2 -> next;
            }
            tail = tail -> next;
        }
        tail -> next = l1 ? l1 : l2;
        return dummy.next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;
        while (lists.size() > 1) {
            vector<ListNode*> merged;
            for (size_t i = 0; i < lists.size(); i += 2) {
                if (i + 1 < lists.size())
                    merged.push_back(mergeTwoLists(lists[i], lists[i + 1]));
                else
                    merged.push_back(lists[i]);
            }
            lists.swap(merged);
        }
        return lists[0];
    }
};