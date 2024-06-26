vector<pair<int,int>> findLCS(int n, int m,string &s1, string &s2){
	// Write your code here.	
	int dp[n+1][m+1];
	for(int i=0;i<m+1;i++){
		dp[0][i]=0;
	}
	for(int i=0;i<n+1;i++){
		dp[i][0]=0;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	int i=n,j=m;
	vector<pair<int,int>> s;
	while(i>0 && j>0){
		if(s1[i-1]==s2[j-1]){
			s.push_back({i-1,j-1});
			i--;
			j--;
		}
		else{
			if(dp[i-1][j]>dp[i][j-1]){
				i--;
			}
			else{
				j--;
			}
		}
	}
    reverse(s.begin(),s.end());
	return s;
}
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.length(),m=str2.length();
        vector<pair<int,int>> s=findLCS(n,m,str1,str2);
        string ans;
        int j=0,k=0;
        for(int i=0;i<s.size();i++){
            while(s[i].first>j){
                ans+=str1[j];
                j++;
            }
            while(s[i].second>k){
                ans+=str2[k];
                k++;
            }
            ans+=str1[j];
            j++;
            k++;
        }
        while(j<n){
            ans+=str1[j];
            j++;
        }
        while(k<m){
            ans+=str2[k];
            k++;
        }
        return ans;
    }
