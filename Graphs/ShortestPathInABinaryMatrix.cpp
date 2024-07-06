int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        queue<pair<int,pair<int,int>>> q;
        int n=g.size();
        if(g[0][0]!=0||g[n-1][n-1]!=0) return -1;
        g[0][0]=-1;
        q.push({1,{0,0}});
        vector<int> a={0,0,1,1,1,-1,-1,-1};
        vector<int> b={1,-1,1,0,-1,1,0,-1};
        while(!q.empty()){
            auto x=q.front();
            int l=x.second.first;
            int r=x.second.second;
            q.pop();
            for(int i=0;i<8;i++){
                int nl=l+a[i];
                int nr=r+b[i];
                if(nl>=0 && nl<=n-1 && nr>=0 && nr<=n-1 && g[nl][nr]<=0){
                    if(g[nl][nr]==0){
                        g[nl][nr]=-(x.first+1);
                        q.push({abs(g[nl][nr]),{nl,nr}});
                    }
                    else if(abs(g[nl][nr])>x.first+1){
                        g[nl][nr]=-(x.first+1);
                        q.push({abs(g[nl][nr]),{nl,nr}});
                    }
                }
            }
        }
        if(g[n-1][n-1]==0) return -1;
        else return abs(g[n-1][n-1]);
    }
https://leetcode.com/problems/shortest-path-in-binary-matrix/
