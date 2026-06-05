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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
       //as fsat is not null then slow would wlso be not null and hence slow goes 1 step forward but fast goes 2 steps forward by the time fast reaches end the slow part would be considered as middle part
        while(fast!=NULL && fast->next!=NULL){
            slow = slow ->next;
            fast = fast ->next ->next;
        }
        return slow;
    }
};