class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0] = 1; //empty prefix
       int prefixSum = 0;
       int count = 0;
       int n = nums.size();

       for(int i = 0; i<n; i++){
        prefixSum = prefixSum + nums[i];

        //divisible by k
        int rem = prefixSum % k;
        
        //for example -1 % 5 = -1 so its negative in order to handle it
        if(rem < 0)//negative
        rem = rem + k;

        count = count + mp[rem];
        mp[rem]++;
       }
     return count;
    }
};