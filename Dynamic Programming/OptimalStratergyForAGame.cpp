 public:
    long long rec(int s,int e,int arr[],vector<vector<int>> &dp){
        if(s>e) return 0;
        if(s==e) return arr[s];
        if(dp[s][e]!=-1) return dp[s][e];
        long long l=arr[s]+min(rec(s+2,e,arr,dp),rec(s+1,e-1,arr,dp));
        long long r=arr[e]+min(rec(s+1,e-1,arr,dp),rec(s,e-2,arr,dp));
        return dp[s][e]=max(l,r);
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return rec(0,n-1,arr,dp);
    }
