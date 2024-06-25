int rec(TreeNode* root,int t){
        if(!root) return t;
            t=rec(root->right,t);
            root->val=root->val+t;
            return rec(root->left,root->val);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int x=rec(root,0);
        return root;
    }
https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/?envType=daily-question&envId=2024-06-25
