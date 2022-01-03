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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* next = head;
        if (head == NULL || head -> next == NULL) return head;
        do {
            if (next -> val == next -> next -> val) {
                next -> next = next -> next -> next;
            } else {
                next = next -> next;
            }
        } while (next -> next != NULL);
        return head;
    }
};