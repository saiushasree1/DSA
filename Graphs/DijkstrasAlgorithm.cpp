vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        vector<int> a(V,1e9);
        a[s]=0;
        minh.push({0,s});
        while(!minh.empty()){
            int x=minh.top().first;
            int y=minh.top().second;
            minh.pop();
            for(auto i:adj[y]){
                if(i[1]+x<a[i[0]]){
                    a[i[0]]=i[1]+x;
                    minh.push({a[i[0]],i[0]});
                }
            }
        }
        return a;
    }
https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
