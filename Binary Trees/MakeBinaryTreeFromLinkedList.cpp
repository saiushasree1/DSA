void rec(TreeNode* &root,int n,vector<int> &a){
        root=new TreeNode(a[n]);
        int l=2*n+1,r=2*n+2;
        if(l<a.size()){
            rec(root->left,l,a);
        }
        if(r<a.size()){
            rec(root->right,r,a);
        }
    }
    void convert(Node *head, TreeNode *&root) {
        vector<int> a;
        while(head){
            a.push_back(head->data);
            head=head->next;
        }
        rec(root,0,a);
    }
https://www.geeksforgeeks.org/problems/make-binary-tree/1
