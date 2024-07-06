vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<vector<vector<int>>> v(n+1);
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            v[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> h;
        vector<int> dist(n+1,1e9);
        vector<int> parent(n+1,0);
        for(int i=0;i<n+1;i++){
            parent[i]=i;
        }
        h.push({0,1});
        dist[1]=0;
        while(!h.empty()){
            auto it=h.top();
            h.pop();
            if(dist[it.second]!=it.first){
                continue;
            }
            for(auto i:v[it.second]){
                if(dist[i[0]]>it.first+i[1]){
                    dist[i[0]]=it.first+i[1];
                    parent[i[0]]=it.second;
                    h.push({dist[i[0]],i[0]});
                }
            }
        }
        vector<int> ans;
        stack<int> st;
        if(dist[n]==1e9) return {-1};
        int x=n;
        while(parent[x]!=x){
            st.push(x);
            x=parent[x];
        }
        ans.push_back(dist[n]);
        ans.push_back(x);
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    
        return ans;
    }
https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1
