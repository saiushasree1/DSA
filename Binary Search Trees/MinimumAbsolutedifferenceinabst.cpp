class Solution
{
    public:
    void inorder(Node* root,vector<int> &d){
        if(!root) return;
        inorder(root->left,d);
        d.push_back(root->data);
        inorder(root->right,d);
        return;
    }
    int absolute_diff(Node *root)
    {
        //Your code here
        vector<int> d;
        inorder(root,d);
        sort(d.begin(),d.end());
        int m=INT_MAX;
        for(int i=0;i<d.size()-1;i++){
            m=min(m,abs(d[i]-d[i+1]));
        }
        return m;
    }
};
