void dfs(int node, stack<int> &st, auto &adj, auto &vis) {
        vis[node] = 1;
        for (auto g : adj[node]) {
            if (!vis[g]) dfs(g, st, adj, vis);
        }
        st.push(node);
	}
	public:
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        vector<int> vis(V);
        stack<int> st;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) dfs(i, st, adj, vis);
        }
        
        vector<vector<int>> transpose(V);
        for (int i = 0; i < adj.size(); i++) {
            for (auto g : adj[i]) {
                transpose[g].push_back(i);
            }
        }
        
        vector<int> nvis(V);
        stack<int> nst;
        int cnt = 0;
        while (st.size()) {
            auto x = st.top();
            st.pop();
            if (!nvis[x]) {
                dfs(x, nst, transpose, nvis);
                cnt++;
            }
        }
        return cnt;
        // return 0;
    }
https://www.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1
