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
        map<int,int>mp;
        while(head){
            mp[head->val]++;
            head=head->next;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        for(auto it:mp){
            if(it.second==1){
                ListNode* dummy1=new ListNode(it.first);
                temp->next=dummy1;
                temp=temp->next;
            }
        }
        
        return dummy->next;
    }
};