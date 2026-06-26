class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int>ans = nums;
       sort(ans.begin(), ans.end());//sorted

       int left = 0;
       while(left<nums.size() && nums[left]==ans[left])
        left++;
       
       int right = nums.size()-1;
       while(right<nums.size() && nums[right]==ans[right])
        right--;
       

       if(left > right) return 0;




    

     return right - left + 1;
    }
};