/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode* h = head;
		while (h -> next) {
			if (h -> val == val) {
				*h = * h -> next;
				break;
			}
			if (h -> next -> next == nullptr) {
				h -> next = nullptr;
				break;
			}
			h = h -> next;
		}
		return head;
	}
};