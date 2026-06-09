class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int minend = nums[0];
        int maxend = nums[0];
        int maxsum = nums[0];
        int minsum = nums[0];

        for(int i =1 ; i<n; i++){
            maxend = max(nums[i],maxend + nums[i] );
            maxsum = max(maxsum, maxend);

            minend = min(nums[i],minend + nums[i] );
            minsum = min(minsum, minend);
        }
        return max(abs(minsum), abs(maxsum));
    }
};