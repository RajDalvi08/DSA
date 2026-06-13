class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int>mp;
        mp[0]= -1;
        int n = nums.size();
        int maxlen = 0;
        int sum = 0;

        for(int i=0; i<n; i++){

            if(nums[i]==0){
                sum+=-1;
            }
            else{
                sum+=1;
            }
       //end means basically empty
        if(mp.find(sum) != mp.end()){ //found if equal to then not found
          int currlen = i - mp[sum];
          maxlen = max(maxlen, currlen); 
        }
        else{
            mp[sum] = i;
        }
        }
        return maxlen;
    }
};