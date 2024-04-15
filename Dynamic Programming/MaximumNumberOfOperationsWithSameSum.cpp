int solver(vector<int>& nums,int l,int r,int t,vector<vector<int>> &dp){
        if(l>=r) return 0;
        if(dp[l][r]!=-1) return dp[l][r];
        int ans=0;
        if(t==nums[l]+nums[l+1]){
            ans=max(ans,1+solver(nums,l+2,r,t,dp));
        }
        if(t==nums[l]+nums[r]){
            ans=max(ans,1+solver(nums,l+1,r-1,t,dp));
        }
        if(t==nums[r]+nums[r-1]){
            ans=max(ans,1+solver(nums,l,r-2,t,dp));
        }
        return dp[l][r]=ans;
    }
    int maxOperations(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return 1+max({solver(nums,2,n-1,nums[0]+nums[1],dp),solver(nums,1,n-2,nums[0]+nums[n-1],dp),solver(nums,0,n-3,nums[n-2]+nums[n-1],dp)});
    }
