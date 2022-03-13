
class Solution {
public:
      ListNode* reverseList(ListNode* head) {
        if(!head or !head->next)return head;
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* forw=curr->next;
        
        while(curr){
            curr->next=prev;
            prev=curr;
            curr=forw;
            if(forw)forw=forw->next;
        }
        
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // l1=reverseList(l1);
        // l2=reverseList(l2);
        ListNode* newHead=new ListNode();
         ListNode* temp=newHead;
        int sum=0;
        int carry=0;
        while(l1 or l2 or carry){
            if(l1)sum+=l1->val;
            if(l2)sum+=l2->val;
            sum+=carry;
            
           
             ListNode* n=new ListNode(sum%10);
            temp->next=n;
            temp=temp->next;
            carry=sum/10;
            sum=0;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        
        //ListNode*ptr=reverseList(newHead->next);
        
        return newHead->next;
    }
};