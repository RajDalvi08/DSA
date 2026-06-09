// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int bestending = a[0];
        int res = a[0];
        int n = a.size();
        
        for(int i = 1; i<n; i++){
            int v1 = a[i];
            int v2 = bestending + a[i];
            bestending = min(v1, v2);
            res = min(res, bestending);
        }
        return res;
        
        
    }
};
