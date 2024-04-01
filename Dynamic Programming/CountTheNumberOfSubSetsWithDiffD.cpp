#include <bits/stdc++.h> 

int countPartitions(int n, int d, vector<int>& arr) {
        int sum=0;
        for(auto i: arr) sum+=i;
        if((d+sum)%2 != 0) return 0;
        int t=(d+sum)/2;
        vector<vector<int>> dp(n+1, vector<int>(t+1, 0));
        dp[0][0] = 1;
        for(int i=1; i<n+1; i++) {
            for(int j=0; j<t+1; j++) {
                if(arr[i-1] <= j) 
                    dp[i][j] = (dp[i-1][j] + dp[i-1][j-arr[i-1]])%1000000007;
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][t];
    }
