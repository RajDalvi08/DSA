class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int>row={1};
        
        for(int i = 1; i<n; i++){
            vector<int>newRow(i + 1, 1);//fill 1 in pascal triangle
            
            for(int j=1; j<i; j++){
                newRow[j]=row[j - 1]+row[j];
            }
            row = newRow;
        }
        return row;
    }
};
