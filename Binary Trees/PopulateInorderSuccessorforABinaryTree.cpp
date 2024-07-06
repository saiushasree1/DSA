void rec(queue<Node*> &st,Node* root){
        if(!root) return;
        rec(st,root->left);
        st.push(root);
        rec(st,root->right);
    }
    void populateNext(Node *root) {
        // code here
        queue<Node*> st;
        rec(st,root);
        while(!st.empty()){
            Node* temp=st.front();
            st.pop();
            if(!st.empty())
            temp->next=st.front();
        }
    }
https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1
