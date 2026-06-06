class Solution {
public:
    int nextIndex(vector<int>& nums, int i){
        int n = nums.size();
        return((i + nums[i]) %n + n) %n;
    }
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            bool dir = nums[i] > 0;
            int slow = i;
            int fast = i;

            while(true){
                int nextSlow = nextIndex(nums, slow);
                int nextFast = nextIndex(nums, fast);
                int nextFast2 = nextIndex(nums , nextFast);

                 // direction must remain same
                if ((nums[slow] > 0) != dir ||
                    (nums[fast] > 0) != dir ||
                    (nums[nextFast] > 0) != dir)
                    break;

                    slow = nextSlow;
                    fast = nextFast2;

                    if(slow == fast){
                        //length > 1
                        if(slow == nextIndex(nums, slow))
                        break;

                        return true;
                    }
            }
        }
        return false;
    }
};