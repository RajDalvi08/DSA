class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        vector<int>f(128, 0);
        //store p frequency in order to have duplicate of it from s n get output
        for(char c : p)
         f[c]++;
         
         //Initialization
         int left = 0;
         int start = 0;
         int minlen = INT_MAX;
         int count = p.size();
         
         for(int right = 0; right<s.size(); right++ ){
             //now go on adding up till the frquency > 0
             if(f[s[right]] > 0)
             count--;
             f[s[right]]--;
             
             //reached the destination
             while(count == 0){
                 int len = right - left + 1;
                 if(len < minlen){
                     minlen = len;
                     start = left;//bcoz from left will get minimum length
                 }
                 f[s[left]]++;
                 
              //now shrink as we have got required destination but there might be elements which are not required
              if(f[s[left]] > 0)
                 count++;
                 left++;
             }
         }
         
       return minlen == INT_MAX ? "" : s.substr(start, minlen);
    }
};