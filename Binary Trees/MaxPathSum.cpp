class Solution {
public:
    int mh(TreeNode* root,int &maxi){
        if(!root) return 0;
        int lh=max(0,mh(root->left,maxi));
        int rh=max(0,mh(root->right,maxi));
        maxi=max(maxi,lh+rh+root->val);
        return max(lh+root->val,rh+root->val);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        mh(root,maxi);
        return maxi;
    }
};
