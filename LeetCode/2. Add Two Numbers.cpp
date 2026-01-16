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

typedef long long ll;
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode dummy;
		ListNode* trav = &dummy;
		ListNode* a = l1;
		ListNode* b = l2;
		int carry = 0;
		while (a && b) {
			int temp = a -> val + b -> val + carry;
			if (temp > 9) carry = 1;
			else carry = 0;
			trav -> next = new ListNode(temp % 10);
			trav = trav -> next;
			a = a -> next;
			b = b -> next;
		}
		if (a) {
			while (a) {
				int temp = a -> val + carry;
				if (temp > 9) carry = 1;
				else carry = 0;
				trav -> next = new ListNode(temp % 10);
				trav = trav -> next;
				a = a -> next;
			}
		}
		if (b) {
			while (b) {
				int temp = b -> val + carry;
				if (temp > 9) carry = 1;
				else carry = 0;
				trav -> next = new ListNode(temp % 10);
				trav = trav -> next;
				b = b -> next;
			}
		}
		return dummy.next;
	}
};