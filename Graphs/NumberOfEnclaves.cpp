int numEnclaves(vector<vector<int>>& g) {
        int c=0;
        int n=g.size();
        int m=g[0].size();
        stack<pair<int,int>> s;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                c+=g[i][j];
                if((i==0 ||j==0 || i==n-1 || j==m-1) && g[i][j]==1){
                    s.push({i,j});
                    g[i][j]=0;
                }
            }
        }
        
        while(!s.empty()){
            c--;
            int i=s.top().first;
            int j=s.top().second;
            s.pop();
            if(i+1<n && g[i+1][j]==1){
                s.push({i+1,j});
                g[i+1][j]=0;
            }
            if(j+1<m && g[i][j+1]==1){
                s.push({i,j+1});
                g[i][j+1]=0;
            }
            if(i-1>=0 && g[i-1][j]==1){
                s.push({i-1,j});
                g[i-1][j]=0;
            }
            if(j-1>=0 && g[i][j-1]==1){
                s.push({i,j-1});
                g[i][j-1]=0;
            }
        }
        return c;
    }
https://leetcode.com/problems/number-of-enclaves/
