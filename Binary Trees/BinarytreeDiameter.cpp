class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        return max({maxDepth(root->left)+maxDepth(root->right),diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)});
    }
};