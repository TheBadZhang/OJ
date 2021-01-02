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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        std::queue <ListNode*> hq;
        for (int a = 0; a < k; a++) {
            hq.push (head);
            head = head -> next;
        }
        if (head == nullptr) return hq.front ();
        while (head -> next) {
            hq.push (head);
            hq.pop ();
            head = head -> next;
        }
        hq.push (head);
        hq.pop ();
        return hq.front ();
    }
};