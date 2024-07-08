int findparent(vector<int> &parent,int v){
        if(parent[v]==v) return v;
        return parent[v]=findparent(parent,parent[v]);
    }
    void unionset(vector<int> &parent,int v,int u){
        int pv=findparent(parent,v);
        int pu=findparent(parent,u);
        if(pv==pu) return;
        parent[pv]=pu;
        return;
    }
    int makeConnected(int n, vector<vector<int>>& c) {
        if(c.size()<n-1) return -1;
        vector<int> parent(n,0);
        for(int i=0;i<n;i++) parent[i]=i;
        int count=0;
        for(int i=0;i<c.size();i++){
            if(findparent(parent,c[i][0])!=findparent(parent,c[i][1])){
                count++;
                unionset(parent,c[i][0],c[i][1]);
            }
        }
        return n-1-count;
    }
https://leetcode.com/problems/number-of-operations-to-make-network-connected/description/
