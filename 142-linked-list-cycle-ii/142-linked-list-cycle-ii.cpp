
class Solution {
public:
    ListNode *getcycle(ListNode *head){
        ListNode *slow = head,*fast = head;
        while(fast and fast->next){
            slow = slow->next;
            fast=fast->next->next;
            if(slow == fast)break;
        }
        return fast;
    }
    ListNode *detectCycle(ListNode *head) {
       ListNode *meetpt =  getcycle(head);
        if(meetpt == nullptr or meetpt->next == nullptr)return nullptr;//cycle not present
       ListNode *slow =head;
        while(slow != meetpt){
            slow = slow->next;
            meetpt = meetpt->next;
        }
        
        return meetpt;
    }
};