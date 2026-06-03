class Solution {
public:
   int find(vector<int> &a){
    int maxc = -1;//order to find max
    for(int i = 0; i < 256; i++)
     maxc = max(maxc, a[i]);
     return maxc;
   }
 
    
    int characterReplacement(string s, int k) {
       int low = 0;
       vector <int> f(256,0);
       int n = s.size();
       int res = INT_MIN;
       int high =0;
       for( high = 0; high < n; high++){

        f[s[high]]++;
        //mfind max frequency
        int maxcnt = find(f);
        int len  = high - low + 1;
        int diff = len - maxcnt;
        while(diff > k){
            f[s[low]]--;
            low++;
            maxcnt = find(f);
            len = high - low + 1;
            diff = len - maxcnt;
         }
         len = high - low + 1;
         res = max(res, len);
       }
       return res;
    }
};