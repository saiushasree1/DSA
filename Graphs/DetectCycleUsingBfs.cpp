 bool detectCycle(int V, vector<int> adj[]) {
        // Write your code here.
        bool det=false;
        queue<pair<int,int>> q;
        q.push({1,-1});
        vector<int> vis(V+1,0);
        vis[1]=1;
        while(!q.empty()){
            for(auto i:adj[q.front().first]){
                if(i!=q.front().second){
                    if(vis[i]==1){
                        det=true;
                        break;
                    }
                    else{
                        vis[i]=1;
                        q.push({i,q.front().first});
                    }
                }
            }
            q.pop();
        }
        return det;
    }
https://www.naukri.com/code360/problems/detect-cycle-in-an-undirected-graph-_758967?leftPanelTabValue=PROBLEM
