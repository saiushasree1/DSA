int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<int> p=matrix[0];
        vector<int> c(n,INT_MAX);
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int x=INT_MAX;
                if(j-1>=0){
                    x=p[j-1]+matrix[i][j];
                }
                if(j+1<n){
                    x=min(x,p[j+1]+matrix[i][j]);
                }
                x=min(x,p[j]+matrix[i][j]);
                c[j]=x;
            }
            p=c;
        }
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            mini=min(p[i],mini);
        }
        return mini;
    }
https://leetcode.com/problems/minimum-falling-path-sum/
