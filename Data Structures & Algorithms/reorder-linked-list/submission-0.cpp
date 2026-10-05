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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;

    }
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* second=slow->next;
        slow->next=NULL;
        second=reverse(second);
        ListNode* curr=head;
        ListNode* first=head->next;
        while(first&&second){
            curr->next=second;
            curr=curr->next;
            second=second->next;
            curr->next=first;
            curr=curr->next;
            first=first->next;
        }
    }
};
