int ways(int x, int y)
    {
        //code here.
        int dp[x+1][y+1];
        for(int i=0;i<x+1;i++){
            dp[i][y]=1;
        }
        for(int j=0;j<y+1;j++){
            dp[x][j]=1;
        }
        dp[x][y]=0;
        for(int i=y-1;i>=0;i--){
            for(int j=x-1;j>=0;j--){
                dp[j][i]=(dp[j+1][i]+dp[j][i+1])%1000000007;
            }
        }
        return dp[0][0];
    }
https://www.geeksforgeeks.org/problems/paths-to-reach-origin3850/1
