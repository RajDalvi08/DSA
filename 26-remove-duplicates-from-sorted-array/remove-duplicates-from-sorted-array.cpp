class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int i=0;//unique elements in array
          int j=1;//scans array
          int n = nums.size();
         
         //now the array should not go outside the actual array while removing duplicates
         while(j<n){
            //duplicate found
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
            }
         }
         return i+1;
    }
};