class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //sort
        sort(nums.begin(), nums.end());
        int n = nums.size();//arr length
        int closest = nums[0]+nums[1]+nums[2];//closest indices sum would be
       //n-2 bcoz three pointer should not go outside the arr
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            //left should lways be less than right in order to execute further logic
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                //max_diff is all about having infinity difference and diff is all about having lowest min difference so it should be always less so whtever maximum value tht is generated is assign to max difference
                int max_diff = abs(target - closest);
                int diff = abs(target - sum);
                //baiscally it will difference found to max difference
                if(diff<max_diff){
                    closest=sum;

                }
                
                 if(sum<target){
                    left++;
                }
                else if(sum>target){
                    right--;
                }
                //else it will return sum if difference goes above max_diff
                else{
                    return sum;
                }
            }
        }
        return closest;
    }
};