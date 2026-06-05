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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        //CHECK FAST AND NEXT ELEMENT IS NOT NULL
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        //THEY WILL MEET AT SOME POINT
        if(slow == fast){
            ListNode* ptr = head;
            //IF THE POINTER IS NOT EQUAL TO SLOW THAT MEANS ITS NOT THE FIRST ELEMENT
            while(ptr!=slow){
                ptr = ptr->next;
                slow = slow->next;
            }
            return ptr;
        }
    }
    return NULL;
    }
};