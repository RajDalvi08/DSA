/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* >st;
        vector<int>ans;
        TreeNode* curr = root;
       //left->root->right approach
        while(curr!=nullptr || !st.empty()){

            while(curr!=nullptr){
                st.push(curr);
                curr = curr->left;//left pushed
            }

            curr = st.top();
            st.pop();

            ans.push_back(curr->val);//root done

            curr = curr->right; //right pusehd
        }
        return ans;
    }
};