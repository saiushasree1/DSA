int LongestRepeatingSubsequence(string str){
		    // Code here
		    int n=str.length();
		    int dp[n+1][n+1];
		    for(int i=0;i<n+1;i++){
		        dp[0][i]=0;
		        dp[i][0]=0;
		    }
		    for(int i=1;i<n+1;i++){
		        for(int j=1;j<n+1;j++){
		            if(str[i-1]==str[j-1] && i!=j){
		                dp[i][j]=1+dp[i-1][j-1];
		            }
		            else{
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    return dp[n][n];
		}
