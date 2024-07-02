int countDistinctIslands(vector<vector<int>>& g) {
        // code here
        set<vector<pair<int,int>>> s;
        int n=g.size(),m=g[0].size();
        vector<vector<int>> v(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 && g[i][j]==1){
                    q.push({i,j});
                    v[i][j]=1;
                    vector<pair<int,int>> h;
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        q.pop();
                        h.push_back({x-i,y-j});
                        if(x+1<n && g[x+1][y]==1 && v[x+1][y]==0){
                            q.push({x+1,y});
                            v[x+1][y]=1;
                        }
                        if(y+1<m && g[x][y+1]==1 && v[x][y+1]==0){
                            q.push({x,y+1});
                            v[x][y+1]=1;
                        }
                        if(x-1>=0 && g[x-1][y]==1 && v[x-1][y]==0){
                            q.push({x-1,y});
                            v[x-1][y]=1;
                        }
                        if(y-1>=0 && g[x][y-1]==1 && v[x][y-1]==0){
                            q.push({x,y-1});
                            v[x][y-1]=1;
                        }
                    }
                    if(h.size()>0)
                    s.insert(h);
                }
            }
        }
        return s.size();
        
    }
https://www.geeksforgeeks.org/problems/number-of-distinct-islands/1
