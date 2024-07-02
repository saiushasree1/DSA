bool check(vector<int> &vi,vector<int> &pvi,vector<int> adj[],int i){
        vi[i]=1;
        pvi[i]=1;
        for(auto x:adj[i]){
            if(!vi[x]){
                if(check(vi,pvi,adj,x)) return true;
            }
            else if(pvi[x]) return true;
        }
        pvi[i]=0;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> vi(V,0),pvi(V,0);
        for(int i=0;i<V;i++){
            if(!vi[i]){
                if(check(vi,pvi,adj,i)) return true;
            }
        }
        return false;
    }
https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
