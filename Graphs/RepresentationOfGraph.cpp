vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    // Write your code here.
    vector<vector<int>> v(n);
   
    for(int i=0;i<m;i++){
        v[edges[i][1]].push_back(edges[i][0]);
        v[edges[i][0]].push_back(edges[i][1]);
        
    }
    return v;
}