class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
       //initializess
   int n = arr.size();
   if(n<k)
    return 0;
   
   //lets see sum part
   int  sum = 0;
   int maxSum = INT_MIN;
   //for having first sum of the window i should be less than k bcoz in order to have sum of 2 subarrays
   for(int i = 0 ; i<k; i++){
    sum = sum + arr[i];
     }
     maxSum = sum;
    //now main sliding assign i as k which is further value
    for(int i=k; i<n; i++){
        sum = sum + arr[i] - arr[i-k];//here basically we assume further element in sliding window n [i-k] as outgoing element while sliding window on further two subarrays
        maxSum = max(maxSum, sum);
    }
    return maxSum;   
    
        
    }
};