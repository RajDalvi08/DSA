class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];
        int currmin = nums[0];
        int currmax = nums[0];
        int minsum = nums[0];
        int maxsum = nums[0];
        int n = nums.size();

        for(int i = 1; i<n; i++){
            currmax = max(nums[i], currmax + nums[i]);
            maxsum = max(maxsum, currmax);

            currmin = min(nums[i], currmin + nums[i]);
            minsum = min(minsum, currmin);

            total = total + nums[i];
        }
        if(maxsum < 0 )
        return maxsum;

        return max(maxsum, total - minsum);
    }
};