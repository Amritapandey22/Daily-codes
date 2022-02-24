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
private:
    ListNode* midNode(ListNode* head){
        if(head == nullptr or head->next == nullptr)return head;
        ListNode* slow = head ,*fast = head;
        while(fast->next != nullptr and fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* mergeTwo(ListNode* head1 ,ListNode* head2){
        if(head1 == nullptr or head2 == nullptr){
            return head1 == nullptr? head2: head1;
        }
        ListNode* dummy =  new ListNode(-1);
        ListNode* temp = dummy;
        while(head1 != nullptr and head2 != nullptr){
            if(head1->val <= head2->val){
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            }else{
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
        }
        
        temp->next = head1 == nullptr? head2 : head1;
        return dummy->next;
    }
public:
    ListNode* sortList(ListNode* head) {
        //by applying merge sort
        if(head == nullptr or head->next == nullptr)return head;
        
        ListNode* mid = midNode(head);
        ListNode* nhead = mid->next;
        mid->next = nullptr;
        
        return mergeTwo(sortList(head),sortList(nhead));
        
    }
};