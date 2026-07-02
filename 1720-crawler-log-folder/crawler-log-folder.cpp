class Solution {
public:
    int minOperations(vector<string>& logs) {
        int deep = 0;

        for(string log : logs){
            if(log == "../"){
                if(deep > 0){
                    deep--;
                }
            }
            else if(log == "./"){
                continue;
            }
            else{
                deep++;
            }
        }
        return deep;
    }
};