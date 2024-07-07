int FindParent(int node, vector<int>&parent)
	{
	    if(node == parent[node]) return node;
	    return parent[node] = FindParent(parent[node], parent);
	}
	
	void UnionByRank(int u, int v, vector<int>&parent, vector<int>&rank)
	{
	    int pu = FindParent(u, parent);
	    int pv = FindParent(v, parent);
	    if(rank[pu] > rank[pv])
	    {
	        parent[pv] = pu;
	    }
	    else if(rank[pu] < rank[pv])
	    {
	        parent[pu] = pv;
	    }
	    else
	    {
	        parent[pv] = pu;
	        rank[pu]++;
	    }
	}
	
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<int> parent(V);
        vector<int> rank(V, 0);
        
        for(int i=0; i<V; ++i)
        {
            parent[i] = i;
        }
        vector<pair<int, pair<int,int>>>temp;
        
        for(int i=0; i<V; ++i)
        {
            for(int j=0; j<adj[i].size(); ++j)
            {
                temp.push_back({adj[i][j][1], {i,adj[i][j][0]}});
            }
        }
        priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>>pq(temp.begin(), temp.end());
        int cost = 0; 
        int edges = 0;
        
        while(!pq.empty())
        {
            int wt = pq.top().first;
            int u = pq.top().second.first;
            int v = pq.top().second.second;
            pq.pop();
            if(FindParent(u,parent)!=FindParent(v,parent)){
                cost += wt;
                UnionByRank(u,v,parent,rank);
                edges++;
            }
            if(edges == V-1) break; 
        }    
        
        return cost;
    }
https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1
