public:
    //Function to return max value that can be put in knapsack of capacity W.
    int rec(int W,int wt[],int val[],int n,vector<vector<int>> &dp){
        if(n==0){
            if(wt[n]<=W){
                return val[n];
            }
            return 0;
        }
       if(dp[n][W]!=-1) return dp[n][W];
       int c1=INT_MIN;
       if(wt[n]<=W){
           c1=rec(W-wt[n],wt,val,n-1,dp)+val[n];
       }
       int c2=rec(W,wt,val,n-1,dp);
       return dp[n][W]=max(c1,c2);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
        vector<vector<int>> dp(n+1,vector<int>(W+1,-1));
        return rec(W,wt,val,n-1,dp);
       
    }
