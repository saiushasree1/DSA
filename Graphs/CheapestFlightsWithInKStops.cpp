int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        vector<vector<pair<int,int>>>v(n);
        for(auto i:f){
            v[i[0]].push_back({i[1],i[2]});
        }
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});
        vector<int> dist(n,1e9);
        dist[src]=0;
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            if(x.first>k) continue;
            for(auto i:v[x.second.first]){
                if(dist[i.first]>i.second+x.second.second){
                    dist[i.first]=i.second+x.second.second;
                    q.push({x.first+1,{i.first,dist[i.first]}});
                }
            }
        }
        if(dist[dst]==1e9) return -1;
        else return dist[dst];
    }
https://leetcode.com/problems/cheapest-flights-within-k-stops/
