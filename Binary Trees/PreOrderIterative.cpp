vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int> ans;
    if(!root) return ans;
    stack<TreeNode*> s;
    s.push(root);
    while(!s.empty()){
        ans.push_back(s.top()->data);
        TreeNode* t=s.top();
        s.pop();
        if(t->right) s.push(t->right);
        if(t->left) s.push(t->left);

    }
    return ans;
}
