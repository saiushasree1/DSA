class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
         if(!root){
            return {};
        }
        vector<int> v=inorderTraversal(root->left);
        v.push_back(root->val);
        vector<int> s=inorderTraversal(root->right);
        v.insert(v.end(),s.begin(),s.end());
        return v;
    }
};