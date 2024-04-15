vector<vector<int>> updateMatrix(vector<vector<int>>& ma) {
        queue<pair<pair<int,int>,int>> q;
        int n=ma.size();
        int m=ma[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        vector<vector<int>> mat(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ma[i][j]==0){
                    dp[i][j]=1;
                    q.push({{i,j},1});
                }
            }
        }
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int t=q.front().second;
            q.pop();
            if(x+1<n && dp[x+1][y]==0){
                mat[x+1][y]=t;
                dp[x+1][y]=1;
                q.push({{x+1,y},t+1});
            }
            if(x-1>=0 && dp[x-1][y]==0){
                mat[x-1][y]=t;
                dp[x-1][y]=1;
                q.push({{x-1,y},t+1});
            }
            if(y-1>=0 && dp[x][y-1]==0){
                mat[x][y-1]=t;
                dp[x][y-1]=1;
                q.push({{x,y-1},t+1});
            }
            if(y+1<m && dp[x][y+1]==0){
                mat[x][y+1]=t;
                dp[x][y+1]=1;
                q.push({{x,y+1},t+1});
            }
            
        }
        return mat;
    }
https://leetcode.com/problems/01-matrix/
