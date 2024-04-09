string findLCS(int n, int m,string &s1, string &s2){
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
	string s;
	while(i>0 && j>0){
		if(s1[i-1]==s2[j-1]){
			s=s1[i-1]+s;
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
	return s;
}
