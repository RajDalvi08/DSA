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
    ListNode* reverseKGroup(ListNode* head, int k) {
         ListNode* dummy = new ListNode(0);
         dummy->next = head;

         ListNode* prevgrp = dummy;
         //as there are k no. of nodes so it exists
         while(true){
            ListNode *kth =prevgrp;//kth present on dummy
            for(int i = 0 ; i<k && kth; i++){//have k endlessly in loop
                kth = kth->next;//now will consider k is on 3
            }
             if(!kth) break;
            //now lets take kth on node 4
            ListNode* groupnext = kth->next;
            ListNode* groupStart = prevgrp->next;

            //now have a prev and current
            ListNode*curr = prevgrp->next;//1
            ListNode*prev = groupnext;//4
           
           //if equal then no use
            while(curr!=groupnext){
                ListNode* temp = curr->next;//2
                curr->next = prev;//3
                prev = curr;
                curr = temp;


            }

            //Reconnect
         prevgrp->next = kth;
         prevgrp = groupStart; 




         }
         return dummy->next;

    }
};