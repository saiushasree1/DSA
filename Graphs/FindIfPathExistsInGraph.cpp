bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> v(n);
        if(source==destination) return true;
        for(auto i:edges){
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        vector<bool> vis(n,false);
        queue<int> s;
        s.push(source);
        vis[source]=true;
        while(!s.empty()){
            int x=s.front();
            s.pop();
            
            for(auto i:v[x]){
                if(i==destination) return true;
                if(!vis[i]){
                    s.push(i);
                    vis[i]=true;
                }
            }
        }
        return false;
    }
https://leetcode.com/problems/find-if-path-exists-in-graph/
