class Solution {
public:
    TreeNode* lastr(TreeNode* root){
        while(root->right){
            root=root->right;
        }
        return root;
    }
    TreeNode* helpr(TreeNode* root){
        if(root->left==NULL){
            return root->right;
        }
        else if(root->right==NULL){
            return root->left;
        }
        TreeNode* rightc=root->right;
        TreeNode* lr=lastr(root->left);
        lr->right=rightc;
        return root->left;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val==key){
            return helpr(root);
        }
        TreeNode* x=root;
        while(root){
            if(root->val>key){
                if(root->left && root->left->val==key){
                    root->left=helpr(root->left);
                    return x;
                }
                else{
                    root=root->left;
                }
            }
            else{
                if(root->right && root->right->val==key){
                    root->right=helpr(root->right);
                    return x;
                }
                else{
                    root=root->right;
                }
            }
        }
        return x;
    }
};