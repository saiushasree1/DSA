void dfs(TreeNode* root,int s,int d,string &st,string &ans1,string &ans2){
        if(root->val==s){
            ans1=st;
            if(ans2.size()!=0) return;
        }
        if(root->val==d){
            ans2=st;
            if(ans1.size()!=0) return;
        }
        if(root->left){
            st.push_back('L');
            dfs(root->left,s,d,st,ans1,ans2);
            st.pop_back();
        }
        if(root->right){
            st.push_back('R');
            dfs(root->right,s,d,st,ans1,ans2);
            st.pop_back();
        }
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string ans1,ans2;
        string st;
        dfs(root,startValue,destValue,st,ans1,ans2);
        int i=0;
        while(i<min(ans1.length(),ans2.length()) && ans1[i]==ans2[i]) i++;
        return string(ans1.size()-i,'U')+ans2.substr(i);
    }
https://leetcode.com/problems/step-by-step-directions-from-a-binary-tree-node-to-another/?envType=daily-question&envId=2024-07-16
