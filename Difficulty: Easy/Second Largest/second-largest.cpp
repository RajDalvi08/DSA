class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = INT_MIN;
        int secondlargest = INT_MIN;
          for(int nums : arr){
              if(nums>largest){
              secondlargest = largest;
              largest = nums;
              }
              else if(nums<largest && nums>secondlargest){
                  secondlargest = nums;
              }
          }
        return (secondlargest == INT_MIN) ? -1: secondlargest;
        }
    
};