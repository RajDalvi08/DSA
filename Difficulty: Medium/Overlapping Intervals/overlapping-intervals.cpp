class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end()); 
        vector<vector<int>> res;
        int start = arr[0][0];
        int end = arr[0][1];
        
        int n = arr.size();
        
        for(int i = 1 ; i<n; i++){
            int s = arr[i][0];
            int e = arr[i][1];
            
            if(end >= s){
                end = max(end, e);
               
            }
            else{
            res.push_back({start, end});
            start=s;
            end=e;
            }
        }
        res.push_back({start, end});
        return res;
    }
};