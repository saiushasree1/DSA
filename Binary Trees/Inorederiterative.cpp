vector<int> getInOrderTraversal(TreeNode *root)
{   vector<int> ans;
    if(!root) return ans;
    stack<TreeNode*> s;
    s.push(root);
    TreeNode* node=root;
    while(true){
        if(node){
            s.push(node);
            node=node->left;

        }
        else{
            if(s.empty())break;
            node=st.top();
            ans.push_back(node->data);
            node=node->right;
        }
    }
    return ans;
}