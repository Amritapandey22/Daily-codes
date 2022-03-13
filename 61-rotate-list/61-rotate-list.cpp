
class Solution {
public:
    pair<int,ListNode*> getLen(ListNode* node){
        ListNode* head=node;
        ListNode*tail;
        int len=0;
        while(head){
            ++len;
            tail=head;
            //cout<<tail->val;
            head=head->next;
        }
        return {len,tail};
    }
    ListNode* rotateRight(ListNode* head, int k) {
       if(k==0 or !head or !head->next)return head;
       
        auto info=getLen(head);
        int len=info.first;
        ListNode* tail=info.second;
        //cout<<tail->val;
       tail->next=head;
        k=k%len;
        ListNode *temp=head;
        ListNode *p=head;
        for(int i=1;i<len-k;i++)temp=temp->next;
        p=temp->next;temp->next=nullptr;
        
        return p;
        
        
    }
};