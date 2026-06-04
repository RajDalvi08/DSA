/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        #define ed endl
        #define null NULL
        #define Node ListNode

        //main condition current first n next should not be null
        if(head == null)
        return false;
        if(head->next == null)
        return false;

        //initialization in order to accces fast and slow node
        Node* slow = head;
        Node* fast = head;
       
        //check whether fast one is not null n its next is not null if not null that means slow is also not null
        while(fast!=null && fast->next!=null){
            slow = slow->next;
            fast = fast->next->next;
        
        //if the both get on same place after completing cycle return true
          if(slow==fast)
          return true;
        }
       return false;
    }
};