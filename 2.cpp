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
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* head = new ListNode(0);
        ListNode* cur = head;
        int carry = 0;
        while(p1 || p2)
        {
            int v1 = p1 != NULL? p1->val : 0;
            int v2 = p2 != NULL? p2->val : 0;
            int value = v1 + v2 + carry;
            carry = value / 10;
            value = value % 10;
            cur->next = new ListNode(value);
            cur = cur->next;
            if (p1 != NULL)
            {
                p1 = p1->next;
            }
            if (p2 != NULL)
            {
                p2 = p2->next;
            }
        }
        if (carry)
        {
            cur->next = new ListNode(carry);
        }
        
        return head->next;
    }
};
