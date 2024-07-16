TreeNode* lca(TreeNode* root,TreeNode* p,TreeNode* q){
        if(!root) return root;
        TreeNode *l=lca(root->left,p,q);
        TreeNode *r=lca(root->right,p,q);
        if((l && r)||root==q ||root==p){
            return root;
        }
        if(!l) return r;
        else return l;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p,q);
    }
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
