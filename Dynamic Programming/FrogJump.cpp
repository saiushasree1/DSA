int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n+1,0);
        dp[1]=abs(height[0]-height[1]);
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1]+abs(height[i]-height[i-1]),dp[i-2]+abs(height[i]-height[i-2]));
        }
        return dp[n-1];
    }
https://www.geeksforgeeks.org/problems/geek-jump/1
