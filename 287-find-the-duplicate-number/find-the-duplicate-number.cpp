class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(true){//bcos it is a cycle so no need to have condition of fast
            slow = nums[slow];
           fast = nums[nums[fast]];
        if(slow == fast){
            int ptr = 0;
            //continue until it meets the requirement
            while(ptr != slow){
             ptr = nums[ptr];
             slow = nums[slow];
              }
            return ptr;

        }

        }
        return slow;
    }
};