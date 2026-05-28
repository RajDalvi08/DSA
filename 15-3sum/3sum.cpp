class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        //in order to have triplets as we move further in array the i reach second last position where we cant assign right so we have to apply condition below
        for(int i=0;i<n-2;i++){
            //apply condition for duplicate of i found
            if(i>0 && nums[i]==nums[i-1]){
              continue;
            }
            int left = i+1;
            int right = n-1;
            int sum = -1*nums[i];
            //now check left is smaller than right
            while(left<right){
                int s = nums[left] + nums[right];
             //now see whether summ==target
             if(s==sum){
                res.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
             //now check whether duplicates found for left as well as right
              while(left < right && nums[left] == nums[left-1]){
                left++;
              }
              while(left < right  && nums[right] == nums[right+1]){
                right--;
              }
             }
             else if(s < sum){
                left++;
             }
             else{
                right--;
             }
            }
            }
            return res;
        }

        
    };
