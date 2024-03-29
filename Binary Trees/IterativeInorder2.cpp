vector<int> inorderTraversal(TreeNode* root) {
         if(!root){
            return {};
        }
        stack<TreeNode*> s;
        s.push(root);
        TreeNode* n=root->left;
        vector<int> a;
        while(!s.empty()){
            if(n){
                if(s.top()!=n)
                s.push(n);
                n=n->left;
            }
            else{
                n=s.top();
                s.pop();
                a.push_back(n->val);
                if(n->right)
                s.push(n->right);
                n=n->right;
                
            }
        }
        return a;
    }
