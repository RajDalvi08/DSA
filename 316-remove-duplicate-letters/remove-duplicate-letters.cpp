class Solution {
public:
    string removeDuplicateLetters(string s) {
      string ans="";
      unordered_set<char>seen;
      vector<int>freq(26, 0);
      

      //befor and after char present
      for(char c : s){
        freq[c - 'a']++;
      }
      for(char c : s){
        freq[c - 'a']--;
      
      //if seen c
      if(seen.count(c))
        continue;
      
      //check frequency count >0 means atleast appears 1 at end
      while(!ans.empty() &&
             ans.back()>c &&
             freq[ans.back()-'a']>0){
                seen.erase(ans.back());
                ans.pop_back();
             }
             ans.push_back(c);
             seen.insert(c);
      }
      return ans;
    }
};