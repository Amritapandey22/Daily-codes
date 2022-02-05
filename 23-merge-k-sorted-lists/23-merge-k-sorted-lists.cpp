
class Solution {
public:
    ListNode* merge2(ListNode* head1,ListNode* head2){
        if(head1 == nullptr or head2 == nullptr){
            return head1 == nullptr ? head2 : head1;
        }
        ListNode* dummy = new ListNode(-2);
        ListNode *temp = dummy;
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
        
        temp->next = head1 == nullptr ? head2 :head1;
        return dummy->next;
        
    }
    
     ListNode* midNode(ListNode* head){
         if(head == nullptr or head->next == nullptr)return head;
          ListNode* slow = head, *fast = head;
         while(!fast->next and !fast->next->next){
             slow = slow->next;
             fast = fast->next->next;
         }
         return slow;
     }
    
    ListNode* getTail(ListNode* head){
         if(head == nullptr or head->next == nullptr)return head;
        ListNode * curr = head;
        while(curr->next != nullptr) curr =  curr->next;
        
        return curr;
    }
    
    
    ListNode* mergeSort(ListNode* head){
        if(head == nullptr  or head->next == nullptr)return head;
        ListNode* mid = midNode(head);
        ListNode* nhead = mid->next;
        mid->next = nullptr;
        
        return merge2(mergeSort(head),mergeSort(nhead));
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)return nullptr;
        if(lists.size() ==1) return lists[0];
        ListNode* dummy = new ListNode(-1);
        ListNode * prev = dummy;
        for(int i=0;i<lists.size();i++){
            ListNode *tail = getTail(lists[i]);
            if(tail != nullptr){
                prev->next = lists[i];
                prev = tail;
            }
        }
        
        return mergeSort(dummy->next);
        
    }
};