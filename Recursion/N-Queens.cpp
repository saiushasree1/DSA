bool issafe(vector<string> temp,int x,int y){
        for(int i=0;i<x;i++){
            if(temp[i][y]=='Q') return false;
        }
        int r=x,c=y;
        while(r>=0 && c>=0){
            if(temp[r][c]=='Q') return false;
            r--;
            c--;
        }
        r=x,c=y;
        while(r>=0 && c<temp.size()){
            if(temp[r][c]=='Q') return false;
            r--;
            c++;
        }
        return true;
    }
    void rec(vector<vector<string>> &ans,int n,int ind,vector<string> temp){
        if(ind==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(issafe(temp,ind,i)){
                temp[ind][i]='Q';
                rec(ans,n,ind+1,temp);
                temp[ind][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string> temp(n,s);
        vector<vector<string>> ans;
        rec(ans,n,0,temp);
        return ans;
    }
https://leetcode.com/problems/n-queens/
