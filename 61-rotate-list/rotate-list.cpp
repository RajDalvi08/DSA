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
    ListNode* rotateRight(ListNode* head, int k) {
       //check list is empty or single
       if(!head || !head->next || k==0)
            return head;
        //intialize length
        int len = 1;
        ListNode* tail = head;

        while(tail->next){
            tail=tail->next;
            len++;
        }

        //k>len then len = 5 k = 7
        k = k%len;
        if(k==0)
        return head;

        //create cycle
        tail->next = head;

        //consider new tail new head which will follow len-k and accordingly give results
        ListNode* newTail = head;
        for(int i = 1; i<len-k;i++){ //k=2 len=5
           newTail=newTail->next;}// moves by 2 if len-k=3

        //now have new head that is 4
        ListNode* newHead = newTail->next; //4-5-1-2-3

        //after completing it would end
        newTail->next = NULL;

        return newHead;

    }
};