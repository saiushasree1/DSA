int minimumEffortPath(vector<vector<int>>& h) {
        int n=h.size(),m=h[0].size();
        vector<vector<int>> dis(n,vector<int>(m,1e9));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        q.push({0,{0,0}});
        dis[0][0]=0;
        vector<int> a={1,0,-1,0};
        vector<int> b={0,1,0,-1};
        while(!q.empty()){
            auto it=q.top();
            q.pop();
            int l=it.second.first;
            int r=it.second.second;
            for(int i=0;i<4;i++){
                int nl=l+a[i];
                int nr=r+b[i];
                if(nl>=0 && nl<=n-1 && nr>=0 && nr<=m-1 && dis[nl][nr]>max(dis[l][r],abs(h[nl][nr]-h[l][r]))){
                    dis[nl][nr]=max(dis[l][r],abs(h[nl][nr]-h[l][r]));
                    q.push({dis[nl][nr],{nl,nr}});
                }
            }
        }
        return dis[n-1][m-1];
    }
https://leetcode.com/problems/path-with-minimum-effort/description/
