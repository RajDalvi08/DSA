class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //initialization
        int sum = 0;
        int n = nums.size();
        int left = 0;
        int minlen = INT_MAX; //till infinity

        //as we have left n right right should always be small as we go further it should no go out of array
        for(int right=0; right<n; right++){
            sum = sum + nums[right]; //going on forward adding

        //second condition as we have to find where our sum>=target and of minlength
        while(sum>=target){
            //minlength
            minlen = min(minlen, right-left+1);
            //now again sum with dropping not required ones
            sum = sum - nums[left];
            left++;

        }
        }
        return(minlen==INT_MAX) ? 0 : minlen;
    }
};