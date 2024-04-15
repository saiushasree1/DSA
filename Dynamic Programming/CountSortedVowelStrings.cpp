int countVowelStrings(int n) {
       vector<int> dp(5,1);
       if(n==1) return 5;
       int sum=1;
       for(int i=2;i<=n;i++){
        for(int j=3;j>=0;j--){
            dp[j]=dp[j+1]+dp[j];
            if(n==i){
                sum+=dp[j];
            }
        }
       }
       return sum;
    }
https://leetcode.com/problems/count-sorted-vowel-strings/
