bool isleaf(TreeNode<int> *root){
    if(!root->left && !root->right) return true;
    else return false;
}
void addleft(TreeNode<int> *root,vector<int> &s){
    while(root && !isleaf(root)){
        s.push_back(root->data);
        if(root->left) root=root->left;
        else root=root->right;
    }
}
void addright(TreeNode<int> *root,vector<int> &s){
    if(root && !isleaf(root)){
        if(root->right){
            addright(root->right,s);
        }
        else addright(root->left,s);
        
        s.push_back(root->data);
    }
    return;
}
void addleaves(TreeNode<int> *root,vector<int> &s){
    if(!root) return;
    if(isleaf(root)) s.push_back(root->data);
    else{
        addleaves(root->left,s);
        addleaves(root->right,s);
    }
}
vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int> s;
    if(!root) return s;
    s.push_back(root->data);

    addleft(root->left, s);
    if(!isleaf(root))
    addleaves(root, s);
    addright(root->right, s);
    return s;
}
