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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        
        ListNode* l_head;
        
        
        if(l1->val < l2->val) {
            l_head = l1;
            l1 = l1->next;
        }
        else if(l1->val >= l2->val) {
            l_head = l2;
            l2 = l2->next;
        }
        ListNode* temp = l_head;
        
        while(l1 != NULL && l2!= NULL) {
            if(l1->val < l2->val) {
                temp->next = l1;
                l1 = l1->next;
                
            }
            else if(l1->val >= l2->val) {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }
        temp->next = (l1 == NULL)? l2:l1;
        return l_head;
    }
};