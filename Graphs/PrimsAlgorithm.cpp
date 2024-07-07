int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        
        int mst=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});
        vector<int> vis(V,0);
        while(!q.empty()){
            auto x=q.top();
            q.pop();
            if(!vis[x.second]){
                mst+=x.first;
                vis[x.second]=1;
                for(auto i:adj[x.second]){
                    if(vis[i[0]]==0){
                        q.push({i[1],i[0]});
                    }
                }
            }
        }
        return mst;
        
    }
https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1
