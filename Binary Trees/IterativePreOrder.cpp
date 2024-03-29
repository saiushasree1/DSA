class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root){
            return {};
        }
        stack<TreeNode*> s;
    vector<int> a;
    s.push(root);
    while(!s.empty()){
        TreeNode* t=s.top();
        s.pop();
        a.push_back(t->val);
        if(t->right) s.push(t->right);
        if(t->left) s.push(t->left);
    }
    return a;
        
    }
};
