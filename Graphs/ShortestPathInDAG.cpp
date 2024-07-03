void topo(stack<int> &s,int i,vector<vector<vector<int>>> &g,vector<int> &vis){
         vis[i]=1;
         for(auto x:g[i]){
             if(vis[x[0]]!=1){
                 topo(s,x[0],g,vis);
             }
         }
         s.push(i);
         return;
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<vector<vector<int>>> g(N);
        for(int i=0;i<M;i++){
            g[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        vector<int> v(N,1e9);
        stack<int> s;
        vector<int> vis(N,0);
        for(int i=0;i<N;i++){
            if(vis[i]!=1){
            topo(s,i,g,vis);
            }
        }
        v[0]=0;
        while(!s.empty()){
            int it=s.top();
            s.pop();
            for(auto i:g[it]){
                if(i[1]+v[it]<v[i[0]]){
                    v[i[0]]=i[1]+v[it];
                }
            }
        }
        for(int i=0;i<N;i++){
            if(v[i]>=1e9) v[i]=-1;
        }
        return v;
    }
https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
