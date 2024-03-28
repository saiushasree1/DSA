int findCeil(BinaryTreeNode<int> *root, int x){
    // Write your code here.
    int ceil=-1;
    while(root){
        if(root->data==x){
            return root->data;
        }
        else if(root->data<x){
            root=root->right;
        }
        else{
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}