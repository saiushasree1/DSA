 void rec(TreeNode* root,int val,int depth){
            if(root==NULL) return;
            if(depth==1){
                TreeNode* sample=new TreeNode(val,root->left,NULL);
                root->left=sample;
                sample=new TreeNode(val,NULL,root->right);
                root->right=sample;
                return;
            }
            rec(root->left,val,depth-1);
            rec(root->right,val,depth-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* x=new TreeNode(val,root,NULL);
            root=x;
        }
        else rec(root,val,depth-1);
        return root;
    }
https://leetcode.com/problems/add-one-row-to-tree/description/?envType=daily-question&envId=2024-04-16
