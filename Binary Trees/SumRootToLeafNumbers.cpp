int rec(TreeNode* root,int ans){
        if(!root->left && !root->right) return ans*10 + root->val;
        ans=ans*10+root->val;
        int l=0,r=0;
        if(root->left){
            l=rec(root->left,ans);
        }
        if(root->right){
            r=rec(root->right,ans);
        }
        return l+r;
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        return rec(root,0);
    }
