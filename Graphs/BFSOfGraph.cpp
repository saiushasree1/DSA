vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         vector<int> v;
    vector<int> vi(V,0);
    queue<int> s;
    s.push(0);
    vi[0]=1;
    while(!s.empty()){
            
            v.push_back(s.front());
            for(int i=0;i<adj[s.front()].size();i++){
                if(!vi[adj[s.front()][i]]){
                    s.push(adj[s.front()][i]);
                    vi[adj[s.front()][i]]=1;
                }
            }
            s.pop();
    }
    return v;
    }