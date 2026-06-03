class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector <int> f(2, 0);
        int low = 0;
        int res = 0;
        int n = nums.size();
        for(int high = 0; high < n; high++){
            f[nums[high]]++;
         
         while(f[0] > k){
            f[nums[low]]--;
            low++;
         }
         res = max(res, high-low+1);
        }
        return res;
    }
};