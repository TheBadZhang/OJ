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
    int getDecimalValue(ListNode* head) {
        int n = 0;
        do {
            n = 2 * n + head -> val;
            head = head -> next;
        } while (head != NULL);
        return n;
    }
};