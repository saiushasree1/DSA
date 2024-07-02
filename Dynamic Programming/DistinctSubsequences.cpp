int rec(int i,int j,string s,string t,vector<vector<int>> &dp){
        if(j==t.length()) return 1;
        if(i==s.length()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take=0,ntake=0;
        if(s[i]==t[j]){
            take=rec(i+1,j+1,s,t,dp);
        }
        ntake=rec(i+1,j,s,t,dp);
        return dp[i][j]=take+ntake;
    }
    int numDistinct(string s, string t) {
        if(s.length()<t.length()) return 0;
        int n=s.length(),m=t.length();
        if(m==0) return 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return rec(0,0,s,t,dp);
    }
https://leetcode.com/problems/distinct-subsequences/
