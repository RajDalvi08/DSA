class Solution {
  public:
    string reverses(string &s) {
        // code here
        int i=0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]==' '){
                i++;
            }
            else if(s[j]==' '){
                j--;
            }
            else{
            swap(s[i], s[j]);
            i++;
            j--;
                
            }
        }
        return s;
    }
};