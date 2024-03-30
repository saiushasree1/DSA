class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int n=g.size();
        if(n==0) return 0;
        int m=g[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cf=0;
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==2){
                    vis[i][j]=2;
                    q.push({{i,j},0});
                }
                else if(g[i][j]==1){
                    cf++;
                }
            }
        }
        int ct=0,ma=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            ma=max(ma,t);
            q.pop();
            if(r+1<n && g[r+1][c]==1 && !vis[r+1][c]){
                q.push({{r+1,c},t+1});
                vis[r+1][c]=2;
                ct++;
            }
            if(r-1>=0 && g[r-1][c]==1 && !vis[r-1][c]){
                q.push({{r-1,c},t+1});
                vis[r-1][c]=2;
                ct++;
            }
            if(c+1<m && g[r][c+1]==1 && !vis[r][c+1]){
                q.push({{r,c+1},t+1});
                vis[r][c+1]=2;
                ct++;
            }
            if(c-1>=0 && g[r][c-1]==1 && !vis[r][c-1]){
                q.push({{r,c-1},t+1});
                vis[r][c-1]=2;
                ct++;
            }
        }
        if(ct!=cf) return -1;
        return ma;
    }
};
