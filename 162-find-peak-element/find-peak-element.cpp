class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int low = 0;
     int high = nums.size()-1;

     while(low < high) {
        int mid = low + (high - low)/2;
        if(nums[mid] > nums[mid + 1]){
            high = mid;   //peak is on left side   
        }
        else{
            low = mid + 1; //peak is on right side
        }
        
     }  
     return low;
    }
};