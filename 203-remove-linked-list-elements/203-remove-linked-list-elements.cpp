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
    ListNode* removeElements(ListNode* head, int val){
        if(!head){
            return nullptr;
        }
        
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* curr=head;
        
        while(curr){
            if(curr->val!=val){
                temp->next=curr;
                temp=temp->next;
            }
            //ListNode *d=curr;
            curr=curr->next;
        }
        
        if(temp->next and temp->next->val==val)temp->next=NULL;
       
        return dummy->next;
        
    }
};