bool isBipartite(vector<vector<int>>& gr) {
        int n=gr.size();
        vector<int> v(n,-1);
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                v[i]=0;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int j=q.front();
                    q.pop();
                for(auto x:gr[j]){
                    if(v[x]==v[j]){
                        return false;
                    }
                    else if(v[x]==-1){
                        q.push(x);
                        v[x]= v[j]?0:1;
                    }
                }
                }

            }
        }
        return true;
    }
https://leetcode.com/problems/is-graph-bipartite/
