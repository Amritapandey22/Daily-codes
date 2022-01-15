/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        while( q && q->next){
            if(q->val==q->next->val){
                q->next=q->next->next;
            }
            else 
            q=q->next;
        }
      
        return head;
        
    }
};