int kPalindrome(string str, int n, int k)
    {
        // code here
        vector<vector<int>> dp(n + 1,vector<int>(n + 1,0));
        string r=str;
        reverse(r.begin(),r.end());
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(str[i-1]==r[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int c=dp[n][n];
        return (n-c)<=k;
    }
https://www.geeksforgeeks.org/problems/find-if-string-is-k-palindrome-or-not1923/1
