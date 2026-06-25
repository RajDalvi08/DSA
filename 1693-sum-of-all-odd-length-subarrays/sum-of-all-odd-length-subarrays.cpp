class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int>prefix(n+1, 0);

        for(int i=0; i<n; i++){
            prefix[i+1] = prefix[i] + arr[i];
        }

        int ans = 0;

        for(int len=1; len<=n; len+=2){
            for(int i=0; i+len-1<n; i++){
                int j = i+len-1;
                ans+=prefix[j+1]-prefix[i];
            }
        }
    return ans;
        
    }
};