int rec(int n,int s,int arr[],vector<vector<int>> &si){
        if(s==0) return si[n][s];
        if(n==0) return 0;
        if(si[n][s]!=-1){
            return (si[n][s])%1000000007;
        }
        if(arr[n-1]<=s){
            int l=(rec(n-1,s-arr[n-1],arr,si)+rec(n-1,s,arr,si))%1000000007;
            return si[n][s]=l;
        }
        else{
            int f=rec(n-1,s,arr,si)%1000000007;
            return si[n][s]=f;
        }
    }
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        int c=1;
        dp[0][0]=1;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                c*=2;
                dp[i+1][0]=c;
            }
            else{
                dp[i+1][0]=dp[i][0];
            }
        }
        return rec(n,sum,arr,dp);
	}
