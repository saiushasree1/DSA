class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& i, int sr, int sc, int color) {
        int n=i.size();
        if(n==0) return i; 
        int m=i[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        stack<pair<int,int>> s;
        s.push({sr,sc});
        vis[sr][sc]=1;
        int oldc=i[sr][sc];
        while(!s.empty()){
            int r=s.top().first;
            int c=s.top().second;
            i[r][c]=color;
            s.pop();
            if(r+1<n && i[r+1][c]==oldc && !vis[r+1][c]){
                s.push({r+1,c});
                vis[r+1][c]=1;
            }
            if(r-1>=0 && i[r-1][c]==oldc && !vis[r-1][c]){
                s.push({r-1,c});
                vis[r-1][c]=1;
            }
            if(c+1<m && i[r][c+1]==oldc && !vis[r][c+1]){
                s.push({r,c+1});
                vis[r][c+1]=1;
            }
            if(c-1>=0 && i[r][c-1]==oldc && !vis[r][c-1]){
                s.push({r,c-1});
                vis[r][c-1]=1;
            }
        }
        return i;
    }
};
