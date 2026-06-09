class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int res = arr[0];

        for(int i = 1; i<n ; i++){
            int prevnodelete = nodelete;
            

            nodelete = max(nodelete + arr[i], arr[i]);
            //either delete nodelete one or consider onedelte which is not know proper + any next number
              if(onedelete == INT_MIN)
                onedelete = prevnodelete;
             else
                onedelete = max(prevnodelete, onedelete + arr[i]);
                 res = max(res, max(nodelete, onedelete));
        }
        return res;

    }
};