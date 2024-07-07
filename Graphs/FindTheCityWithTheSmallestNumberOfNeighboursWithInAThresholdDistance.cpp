 int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> v(n,vector<int>(n,1e9));
        for(auto i:edges){
            v[i[0]][i[1]]=i[2];
            v[i[1]][i[0]]=i[2];
        }
        for(int k=0;k<n;k++) v[k][k]=0;
        for(int via=0;via<n;via++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    v[j][k]=min(v[j][k],v[j][via]+v[via][k]);
                }
            }
        }
        int maxc=n,maxe=0;
        for(int k=0;k<n;k++){
            int c=0;
            for(auto x:v[k]){
                if(x<=distanceThreshold){
                    c++;
                }
            }
            if(c<=maxc){
                maxc=c;
                maxe=k;
            }
        }
        return maxe;
    }
https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/
