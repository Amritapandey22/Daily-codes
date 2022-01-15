
class Solution {
public:
    ListNode* revLL(ListNode* prev,ListNode*curr){
        if(curr == nullptr)return prev;
        ListNode* forw=curr->next;
        curr->next=prev;
        
        return revLL(curr,forw);
    }
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)return head;
        ListNode*prev=nullptr,*curr=head;
        
        return revLL(prev,curr);
    }
};