class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> f;
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        int n = fruits.size();
        //maximum no. of fruits at most 2
        for(high = 0; high < n; high++){
            f[fruits[high]]++; //add
         int siz = f.size();
         //if greater than 2
         while(f.size()>2){
            f[fruits[low]]--;
            low++;
            //while lowering size reaches to 0
            if(f[fruits[low - 1]]==0){
                f.erase(fruits[low - 1]);
            }
         }
         int len = high - low + 1;
         res = max(res, len);
        }
        if(res == INT_MIN)
        return -1;
        return res;
    }
}; 