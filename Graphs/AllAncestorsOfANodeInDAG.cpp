void rec(int n,vector<vector<int>> &v,vector<vector<int>> &a,vector<int> &vis,int p){
        vis[p]=1;
        for(auto i:v[p]){
            if(vis[i]!=1){
                a[i].push_back(n);
                rec(n,v,a,vis,i);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> v(n);
        vector<vector<int>> a(n);
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            vector<int> vis(n,0);
            rec(i,v,a,vis,i);
        }
        
        return a;
    }
https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/description/?envType=daily-question&envId=2024-06-29
