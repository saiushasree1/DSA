int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n;i++){
            
        for(int j=1;j<=k;j++){
           if(i - j >= 0){
            dp[i]= min(dp[i],dp[i-j] + abs(height[i]-height[i-j]));}
        }    
            
        }
        return dp[n-1];
    }
https://www.geeksforgeeks.org/problems/minimal-cost/1
