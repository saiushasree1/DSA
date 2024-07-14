void rec(vector<vector<int>> &ans,vector<int> temp,int k,int n,int ind){
        if(k<0) return;
        if(k==0 && n==0){
            ans.push_back(temp);
        }
        for(int i=ind;i<=9;i++){
            if(i>n) break;
            temp.push_back(i);
            rec(ans,temp,k-1,n-i,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        rec(ans,{},k,n,1);
        return ans;
    }
https://leetcode.com/problems/combination-sum-iii/
