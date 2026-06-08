/* Structure of a link list node
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

    Node *divide(Node *head) {
        // code here
        Node* evenHead= NULL;
        Node* evenTail = NULL;
        
        Node* oddHead = NULL;
        Node* oddTail = NULL;
        
        Node* curr = head;
        
        while(curr){
            
            if(curr->data % 2 == 0){
                if(!evenHead){
                    evenHead = evenTail = curr;
                }
                else{
                    evenTail->next = curr;
                    evenTail = curr;
                }
            }
            else{
               if(!oddHead){
                    oddHead = oddTail = curr;
                }
                else{
                    oddTail->next = curr;
                    oddTail = curr;
                } 
            }
            curr = curr->next;
        }
            
            if(oddTail){
                oddTail->next = NULL;
                }
            if(!evenHead){
                return oddHead;
            }
            evenTail->next = oddHead;
            
        
        return evenHead;
    }
};