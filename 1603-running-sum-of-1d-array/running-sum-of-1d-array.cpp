class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    for(int i=1; i<nums.size(); i++){
        nums[i]+=nums[i-1];//previous one to we have to add so if we have to go further we can do i+1 and start form 0th index
    }
    return nums;
    }
};