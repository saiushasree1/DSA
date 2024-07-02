bool isMatch(string s, string p) {
        int n=p.length(),m=s.length();
        vector<vector<bool>> dp(n+1,vector<bool>(m+1,false));
        dp[0][0]=true;
        for(int i=1;i<=m;i++){
            dp[0][i]=false;
        }
        for(int j=1;j<=n;j++){
            int fl=true;
            for(int k=1;k<=j;k++){
                if(p[k-1]!='*'){
                    fl=false;
                    break;
                }
            }
            dp[j][0]=fl;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[j-1]==p[i-1]||p[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[i-1]=='*'){
                    dp[i][j]=dp[i][j-1]|dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
https://leetcode.com/problems/wildcard-matching/
