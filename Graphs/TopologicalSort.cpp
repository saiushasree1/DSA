void dfs(stack<int> &s,vector<int> adj[],vector<int> &v,int n){
	    v[n]=1;
	    for(auto i:adj[n]){
	        if(v[i]==0){
	            dfs(s,adj,v,i);
	        }
	    }
	    s.push(n);
	    return;
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> v(V,0),ans;
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!v[i])
	        dfs(s,adj,v,i);
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
https://www.geeksforgeeks.org/problems/topological-sort/1
