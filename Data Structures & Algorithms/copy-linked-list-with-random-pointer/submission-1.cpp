/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*,Node*>mpp;
      for(Node* curr=head;curr!=NULL;curr=curr->next){
        mpp[curr]=new Node(curr->val);
      }
      for(Node* curr=head;curr!=NULL;curr=curr->next){
        mpp[curr]->next=mpp[curr->next];
        mpp[curr]->random=mpp[curr->random];
      }
      return mpp[head];  
    }
};
