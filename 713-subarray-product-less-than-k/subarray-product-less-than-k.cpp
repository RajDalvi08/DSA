class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int low = 0;
        int res = 0;
        int n = nums.size();
            if (k <= 1) return 0;

        for(int high = 0; high<n; high++){
            product = product*nums[high];
            while(product >= k){
                product /= nums[low];
                low++;

            }
            res += high - low + 1;
        }
        return res;
    }
};