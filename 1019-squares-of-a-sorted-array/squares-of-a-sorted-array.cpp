class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans(n); // new result array
        int i = 0;//left part of arr
        int j=n-1;//right part of arr
        int k = n-1; //insert from backside of array

        while(i<=j){
            int leftarr = nums[i]*nums[i];
            int rightarr  = nums[j]*nums[j];
            
            if(leftarr > rightarr){
                ans[k] = leftarr;
                i++;
            }
            else{
                ans[k] = rightarr;
                j--;
            }
            k--;
        }
        return ans;
    }
};