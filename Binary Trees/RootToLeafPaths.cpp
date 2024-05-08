void rec(vector<vector<int>> &v,vector<int> c,Node* root){
        if(!root) return;
        if(!root->left && !root->right){
            c.push_back(root->data);
            v.push_back(c);
            return;
        }
        c.push_back(root->data);
        rec(v,c,root->left);
        rec(v,c,root->right);
        return;
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>> v;
        vector<int> c;
        rec(v,c,root);
        return v;
    }
https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1
