int findNumOfProvinces(vector<vector<int>>& v, int n) {
    // Write your code here.
    vector<int> vi(n,0);
    int c=0;
    
    for(int i=0;i<n;i++){
        if(!vi[i]){
            queue<int> s;
            s.push(i);
            vi[i]=1;
            while(!s.empty()){
                int x=s.front();
                for(int j=0;j<n;j++){
                    if(v[x][j] && vi[j]==0){
                        s.push(j);
                        vi[j]=1;
                    }
                }
                s.pop();
            }
            c++;
        }
    }
    return c;
}