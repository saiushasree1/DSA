class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(abs(maxDepth(root->left)-maxDepth(root->right))>1){
            return false;
        }
        else{
            return isBalanced(root->left)&&isBalanced(root->right);
        }
        return true;
    }
};