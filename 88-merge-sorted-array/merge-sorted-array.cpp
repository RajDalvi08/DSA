class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int res[m+n];
        //compare as it is inside
        while(i<m && j<n ){
            if(nums1[i] <= nums2[j]){
                res[i+j] = nums1[i];
                
                i++;
            }
            else{
                 res[i+j] = nums2[j];
                
                j++;
            }
        }
        //check as every individual arr over doent goes outside 
        while(i<m){
           res[i+j] = nums1[i];
                
                i++;
        }
        while(j<n){
           res[i+j] = nums2[j];
                
                j++; 
        }
     for(int x=0; x<m+n; x++){
        nums1[x]=res[x];
          
     }
    }
};