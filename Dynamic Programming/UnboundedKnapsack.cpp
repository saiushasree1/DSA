int knapSack(int n, int w, int val[], int wt[])
    {
        // code here
        int dp[n+1][w+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(wt[i-1]<=j){
                    dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][w];
