vector<int> inorder(TreeNode* root){
    if(!root){
        return {};
    }
    vector<int> v=inorder(root->left);
    v.push_back(root->data);
    vector<int> s=inorder(root->right);
    v.insert(v.end(),s.begin(),s.end());
    return v;
}
vector<int> postorder(TreeNode* root){
    if(!root){
        return {};
    }
    vector<int> v=postorder(root->left);
    vector<int> s=postorder(root->right);
    v.insert(v.end(),s.begin(),s.end());
    v.push_back(root->data);
    return v;
}
vector<int> preorder(TreeNode* root){
    if(!root){
        return {};
    }
    vector<int> v;
    v.push_back(root->data);
   vector<int> k= preorder(root->left);
   v.insert(v.end(),k.begin(),k.end());
    vector<int> s=preorder(root->right);
    v.insert(v.end(),s.begin(),s.end());
    
    return v;
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<int> v=inorder(root);
    vector<int> k=postorder(root);
    vector<int> s=preorder(root);
    return {v,s,k};
}