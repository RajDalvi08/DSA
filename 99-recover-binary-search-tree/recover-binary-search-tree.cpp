class Solution {
private:
    TreeNode* first = nullptr;
    TreeNode* second = nullptr;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);

        // Detect swapped nodes
        if (prev && prev->val > root->val) {
            if (!first) {
                first = prev; // First violation pointer
            }
            second = root;    // Updated on both 1st and 2nd violations
        }
        prev = root;

        inorder(root->right);
    }

public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        if (first && second) {
            std::swap(first->val, second->val);
        }
    }
};