vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vi(V,false);
        vector<int> ans;
        stack<int> s;
        s.push(0);
        vi[0]=true;
        while(!s.empty()){
            ans.push_back(s.top());
            int x=s.top();
            s.pop();
            for(int i=adj[x].size()-1;i>=0;i--){
                if(!vi[adj[x][i]]){
                    s.push(adj[x][i]);
                    vi[adj[x][i]]=true;
                }
            }
        }
        return ans;
    }