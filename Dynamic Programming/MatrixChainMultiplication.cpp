int matrixMultiplication(vector<int> &arr,int n)
    {
        // code here
         int dp[n][n];
         for(int i=1;i<n;i++){
             dp[i][i]=0;
         }
         for(int i=n-1;i>=1;i--){
             for(int j=i+1;j<n;j++){
                 int mi=INT_MAX;
                 for(int k=i;k<j;k++){
                     int s=arr[i-1]*arr[k]*arr[j]+dp[i][k]+dp[k+1][j];
                     mi=min(mi,s);
                 }
                 dp[i][j]=mi;
             }
         }
         return dp[1][n-1];
    }
