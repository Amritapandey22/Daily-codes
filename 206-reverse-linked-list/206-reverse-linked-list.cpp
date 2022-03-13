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
};