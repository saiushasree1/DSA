class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root){
            return {};
        }
        vector<int> v;
        v.push_back(root->val);
        vector<int> s=preorderTraversal(root->left);
        v.insert(v.end(),s.begin(),s.end());
        s=preorderTraversal(root->right);
        v.insert(v.end(),s.begin(),s.end());
        return v;
    }
};