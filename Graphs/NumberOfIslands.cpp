class Solution {
public:
    int numIslands(vector<vector<char>>& g) {
        if(g.size()==0) return 0;
        int c=0;
        int n=g.size(),m=g[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='1'){
                    c++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x=q.front().first;
                        int y=q.front().second;
                        g[x][y]='0';
                        q.pop();
                        if(x+1<n && g[x+1][y]=='1'){
                            q.push({x+1,y});
                            g[x+1][y]='0';
                        }
                        if(x-1>=0 && g[x-1][y]=='1' ){
                            q.push({x-1,y});
                            g[x-1][y]='0';
                        }
                        if(y-1>=0 && g[x][y-1]=='1'){
                            q.push({x,y-1});
                            g[x][y-1]=0;
                        }
                        if(y+1<m && g[x][y+1]=='1'){
                            q.push({x,y+1});
                            g[x][y+1]='0';
                        }
                    }
                }
            }
        }
         return c;
    }
};