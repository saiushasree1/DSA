int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=0;i<n-1;i++){
            for(int k=1;k<=nums[i] && k+i<n;k++){
                dp[i+k]=min(dp[i]+1,dp[i+k]);
            }
        }
        return dp[n-1];
    }
