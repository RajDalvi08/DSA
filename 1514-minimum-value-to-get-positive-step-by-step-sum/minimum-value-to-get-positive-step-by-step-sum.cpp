class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int prefixSum = 0;
        int minPrefix = 0;

        for(int num : nums){
            prefixSum += num;
            minPrefix = min(minPrefix, prefixSum);
        }

        return 1 - minPrefix;




    }
};