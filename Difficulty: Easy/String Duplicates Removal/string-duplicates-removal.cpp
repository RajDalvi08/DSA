class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string ans;
        unordered_set<char>st;
        for(char ch: s){
            if(st.find(ch)==st.end()){
                ans.push_back(ch);
                st.insert(ch);
            }
        }
        return ans;
    }
};