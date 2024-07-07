vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int> v(V,1e8);
        v[S]=0;
        for(int i=1;i<V;i++){
            for(auto j:edges){
                if(v[j[0]]!=1e8 && v[j[0]]+j[2]<v[j[1]]){
                    v[j[1]]=v[j[0]]+j[2];
                }
            }
        }
        for(auto j:edges){
                if(v[j[0]]!=1e8 && v[j[0]]+j[2]<v[j[1]]){
                    return {-1};
                }
        }
        return v;
    }
https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
