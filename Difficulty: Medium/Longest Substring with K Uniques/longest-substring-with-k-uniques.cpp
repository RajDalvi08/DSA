class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        //initializess
        int low = 0;
        int high = 0;
        int res = INT_MIN; //return -1
        int n = s.size();
        unordered_map<char,int> f; // using hashmap
       
        //main condition
       for(high=0; high<n; high++) {
           //insert high
           f[s[high]]++;
        //if size is greater than k
        int siz = f.size();
        while(f.size()>k){
            f[s[low]]--;//size is increasing in order to reduce it we need too reduce frequency
            low++;
        //if frequency==0
        if(f[s[low - 1]]==0){
            f.erase(s[low - 1]); //erase in order to it doesnt exist
        }
        }
        //main conditon f.size==k unique
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