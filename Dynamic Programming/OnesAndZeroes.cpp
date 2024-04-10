int ones(string s){
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') c++;
        }
        return c;
    }
    
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<pair<int,int>> v;
        for(int i=0;i<strs.size();i++){
            int c=ones(strs[i]);
            v.push_back({c,strs[i].length()-c});
        }
        int len=v.size();
       int dp[len+1][m+1][n+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                dp[0][j][i]=0;
            }
        }
        for(int k=1;k<len+1;k++){
            for(int i=0;i<m+1;i++){
                for(int j=0;j<n+1;j++){
                    if(v[k-1].first<=j && v[k-1].second<=i){
                        dp[k][i][j]=max(dp[k-1][i][j],1+dp[k-1][i-v[k-1].second][j-v[k-1].first]);
                    }
                    else{
                        dp[k][i][j]=dp[k-1][i][j];
                    }
                }
            }
        }
        return dp[len][m][n];
    }
