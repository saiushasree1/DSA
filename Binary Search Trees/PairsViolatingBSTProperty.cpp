class Solution {
  public:
    void inorder(Node* root, vector<int>&v)
    {
        if(root)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
    }
    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
         vector<int>v;
        inorder(root,v);
        vector<int>tp;
        tp=v;
        sort(tp.begin(),tp.end());
        int ct=0;
        for(int i=0; i<v.size(); i++)
        {
            int ind=lower_bound(tp.begin(),tp.end(),v[i])-tp.begin();
            ct+=ind;
            tp.erase(tp.begin()+ind);
        }
        return ct;
    }
};
