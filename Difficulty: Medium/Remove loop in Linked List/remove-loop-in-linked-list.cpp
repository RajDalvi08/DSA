/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        if(head == NULL) return;
       Node* slow = head;
       Node* fast = head;
       
       while(fast!=NULL && fast->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;
           
           if(slow==fast){
               break;
           }
       }
           if(fast==NULL || fast->next==NULL)
           return;
           
           //consider slow = head
           slow=head;
           
           if(slow==fast){
               while(fast->next!=slow){
                   fast = fast->next;
               }
               
            
           }
           else{
               while(slow->next != fast->next){
                   slow=slow->next;
                   fast=fast->next;
               }
               
           
       }
       
       fast->next = NULL;
    }
};