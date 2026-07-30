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
    ListNode* reverseList(ListNode* head) {
         ListNode* curr = head;
         ListNode* prev = NULL;

         while(curr){
            ListNode*next = curr->next;//store curr next value
            curr->next = prev;
            prev = curr;
            curr = next;
            //so after these further going the curr gonna become null at some point and the head would be the prev value

         }
         return prev;
    }
};