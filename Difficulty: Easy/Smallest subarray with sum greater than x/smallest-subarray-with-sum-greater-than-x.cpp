class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int left = 0;
        int right = 0;
        int sum=0;
        int n =arr.size();
        int minlen = INT_MAX;
        
        for(int right=0; right<n; right++){
            sum = sum + arr[right];
            
           while(sum > x){
               minlen = min(minlen, right-left + 1);
               sum = sum - arr[left];
               left++;
                
               
           }
        
            
        }
        return(minlen==INT_MAX) ? 0 : minlen;
    }
};