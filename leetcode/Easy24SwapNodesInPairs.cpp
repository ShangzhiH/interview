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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* result = head->next;
        head->next = result->next;
        result->next = head;
        
        ListNode* l1 = head;
        ListNode* l2 = head->next;
        if(l2 == NULL)
            return result;
        ListNode* l3 = l2->next;
        if(l3 == NULL)
            return result;
            
        while(l3 != NULL) {
            ListNode* temp = l3->next;
            l1->next = l3;
            l3->next = l2;
            l2->next =temp;
            
            l1 = l2;
            
            l2 = l2->next;
            
            if(l2 == NULL)
                break;
            l3 = l2->next;
        }
        return result;
    }
};