vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> v(V,0);
	    queue<int> s;
	    vector<int> ans;
	    for(int i=0;i<V;i++){
	        for(auto j:adj[i]){
	            v[j]++;
	        }
	    }
	    for(int i=0;i<V;i++){
	        if(v[i]==0){
	            s.push(i);
	        }
	    }
	    while(!s.empty()){
	        int x=s.front();
	        ans.push_back(x);
	        s.pop();
	        for(auto i:adj[x]){
	            v[i]--;
	            if(v[i]==0) s.push(i);
	        }
	    }
	    return ans;
	}
https://www.geeksforgeeks.org/problems/topological-sort/1
