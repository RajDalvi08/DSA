class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int low = 0;
       int high = 0;
       int res = INT_MIN;
        unordered_map<char,int> f;
        int n = s.size();
       //there is not k given
      for(high = 0; high<n; high++){
        f[s[high]]++;
        int len = high-low+1;
     //as f.size<len tells us that there exists duplicate characters
        while(f.size()<len){
            f[s[low]]--;
            low++;
            if(f[s[low - 1]] == 0){
                f.erase(s[low - 1]);
            }
            len = high - low + 1;
        }
         len = high - low + 1;
         res = max(res, len);
      }
      if(res == INT_MIN)
      return 0;
      return res;
    }
};