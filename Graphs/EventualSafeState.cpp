bool check(vector<vector<int>> &vis,vector<int> ad[],int n){
        vis[n][0]=1;
        if(ad[n].size()==0){
            vis[n][1]=1;
            return true;
        }
        bool f=true,x=false;
        for(auto i:ad[n]){
            if(!vis[i][0]){
                vis[i][0]=1;
                f=f&check(vis,ad,i);
            }
            else if(vis[i][1]==0){
                f=false;
            }
            
        }
        if(f) vis[n][1]=1;
        return f;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<vector<int>> vis(V,vector<int>(2,0));
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(vis[i][0]==1){
                if(vis[i][1]==1) ans.push_back(i);
            }
            else if(check(vis,adj,i)){
                vis[i][1]=1;
                ans.push_back(i);
            }
        }
        return ans;
    }
https://www.geeksforgeeks.org/problems/eventual-safe-states/1
