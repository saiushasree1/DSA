class Solution{
    int sss(int arr[],int n,int cursum,int sum,vector<vector<int>> &dp){
        if(n==-1){
            return abs(sum-2*cursum);
        }
        if(dp[n][cursum]!=-1){
            return dp[n][cursum];
        }
        return dp[n][cursum]=min(sss(arr,n-1,cursum+arr[n],sum,dp),sss(arr,n-1,cursum,sum,dp));
    }
  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
	    return sss(arr,n-1,0,sum,dp);
	} 
};
