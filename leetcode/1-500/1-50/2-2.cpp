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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode (0);
        ListNode* result = l3;
        char a, b, c = 0;
        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL) {
                a = l1 -> val;
                l1 = l1 -> next;
            } else {
                a = 0;
            }
            if (l2 != NULL) {
                b = l2 -> val;
                l2 = l2 -> next;
            } else {
                b = 0;
            }

            l3 -> next = new ListNode ((a+b + c)%10);
            c = (a+b+c) / 10;
            l3 = l3 -> next;
        }
        if (c > 0) l3->next=new ListNode (c);
        return result -> next;
    }
};