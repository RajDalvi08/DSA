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
     ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* tail  = dummy;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
                
            }
            else{
                tail->next = list2;
                list2 = list2->next; 
            }
            tail = tail -> next;
        }
        if(list1){
            tail->next = list1;
        }
        else{
            tail->next = list2;
        }

        return dummy -> next;



        }
        //divide n conquer
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        int n = lists.size();

      //n should be > 1 menas atleast it should exist
        while(n>1){
            int k = (n + 1)/2;
            for(int i = 0; i<n/2; i++){
                lists[i] = merge(lists[i],lists[i+k]); //merging of i part with k part
            }
            n=k;
        }
        return lists[0];//if not n having length then return 0
    }
};