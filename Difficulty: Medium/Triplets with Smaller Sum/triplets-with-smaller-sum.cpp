class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        //sort
          sort(arr.begin(), arr.end());
          int n = arr.size();
          int ans = 0;
          
          //right should no go outside of array
          for(int i=0; i<n-2;i++){
              int j = i+1;
              int k = n-1;
             
            while(j<k){
                int s = arr[i] + arr[j] + arr[k];
                if(s>=sum){
                    k--;
                }
                //k-j bcoz as we do it going to decrease the sum n will consider it as smallest sum
                else{
                    ans = ans + (k-j);
                    j++;
                }
            }
          }
          return ans;
        
    }
};