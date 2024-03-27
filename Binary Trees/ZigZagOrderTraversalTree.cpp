class Solution {
public:
    void lo(TreeNode* root,int n,vector<vector<int>> &v){
        if(root==NULL){
            return ;
        }
        if(v.size()<=n){
            v.push_back({});
        }
        v[n].push_back(root->val);
        lo(root->left,n+1,v);
        lo(root->right,n+1,v);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        lo(root,0,v);
        for(int i=1;i<v.size();i=i+2){
            reverse(v[i].begin(),v[i].end());
        }
        return v;
    }
};