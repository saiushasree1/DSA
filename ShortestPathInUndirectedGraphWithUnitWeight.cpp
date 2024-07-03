vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int> v(N,1e9);
        vector<vector<int>> g(N);
        v[src]=0;
        for(int i=0;i<M;i++){
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        queue<pair<int,int>> q;
        q.push({src,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            for(auto i:g[it.first]){
                if(v[i]==1e9){
                    v[i]=it.second+1;
                    q.push({i,v[i]});
                }
                else{
                    v[i]=min(v[i],it.second+1);
                }
            }
        }
        for(int i=0;i<N;i++){
            if(v[i]==1e9) v[i]=-1;
        }
        return v;
    }
https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
