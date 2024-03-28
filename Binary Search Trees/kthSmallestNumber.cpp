class Solution {
public:
    void s(TreeNode* root,int &c,int &a,int k){
        if(root==NULL) return;
        s(root->left,c,a,k);
        c++;
        if(c==k){
            a=root->val;
            return;
        }
        s(root->right,c,a,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int c=0;
        int a;
        s(root,c,a,k);
        return a;
    }
};