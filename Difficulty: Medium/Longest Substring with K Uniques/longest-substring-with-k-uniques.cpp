class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
       int low  = 0;
       int high = 0;
       int res = INT_MIN;//return -1
       int n = s.size();
       unordered_map<char,int> f;

       
       for(high=0 ; high<n ; high++){
           //insert high
           f[s[high]]++;
        int siz = f.size();
          //main condition
          while(f.size()>k){
              f[s[low]]--;
              low++;
         //if it goes till 0
         if(f[s[low - 1]]==0){
             f.erase(s[low - 1]);
         }
          }
          //main condition
          if(f.size()==k){
             int len = high - low + 1;
              res = max(res, len);
          }
       }
       if(res == INT_MIN)
       return -1;
       return res;
       
    }
};