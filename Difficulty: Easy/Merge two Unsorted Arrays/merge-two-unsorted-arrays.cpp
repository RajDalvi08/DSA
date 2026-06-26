class Solution {
  public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        // code here
       vector<int>ans;
       for(int x:a){
           ans.push_back(x);
       }
       for(int x:b){
           ans.push_back(x);
       }
       
       sort(ans.begin(), ans.end());
       return ans;
       
    }
};