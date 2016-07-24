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
    ListNode* reverseList(ListNode* head) {
        ListNode* p1 = head;
        if(p1 == NULL || p1 ->next == NULL)
            return p1;
        
        ListNode* p2 = p1->next;
        p1->next = NULL;
        ListNode* p3;
        while(p2->next != NULL) {
            p3 = p2->next;
            p2->next = p1;
            p1 = p2;
            p2 = p3;
        }
        p2->next = p1;
        return p2;
    }
};