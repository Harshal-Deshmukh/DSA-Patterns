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
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=slow->next;
        ListNode* preSlow=NULL;
        
        while(fast!=NULL){
            if(slow->val!=fast->val){//no duplicate
                preSlow=slow;
                slow=fast;
                fast=fast->next;
            }
            else{//duplicate found
                while(fast!=NULL && fast->val==slow->val){
                    fast=fast->next;
                }  
                if(preSlow==NULL){//duplicate at first
                head=fast;
            }
            else{
                preSlow->next=fast;
            }
            slow=fast;
            if(fast!=NULL) fast=fast->next;
            }   
        }
        return head;
    }
};