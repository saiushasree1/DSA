class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp=new TreeNode(val);
        TreeNode* x=root;
        while(root){
            if(root->val<val){
                if(!root->right){
                    root->right=temp;
                    break;
                }
                else root=root->right;
            } 
            else{
                if(!root->left){
                    root->left=temp;
                    break;
                }
                else{
                    root=root->left;
                }
            }
        }
        if(!x){
            return temp;
        }
        else return x;
    }
};