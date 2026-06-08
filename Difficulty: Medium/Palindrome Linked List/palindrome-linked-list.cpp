/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    //reverse
    Node* prev = NULL;
    Node* curr = slow;
    while(curr){
        Node* newNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newNode;
    }
    
    //now check by doing reverse first node equal to second node
    Node* first = head;
    Node* second = prev;
    
    while(second){
    if(first->data != second->data){
        return false;
    }
    else{
        first = first->next;
        second = second->next;
    }
    }
    
    return true;
    }
};