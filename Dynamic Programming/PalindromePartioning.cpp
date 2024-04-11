bool ispalindrome(int i, int j, string &s)
    {
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int minCut(string s) 
    {
        int n = s.length();
        vector<int>dp(n + 1, 0);
        for(int i = n - 1; i >= 0; i--)
        {
            int mini = INT_MAX;
            for(int j = i; j <= s.length() - 1; j++)
            {
                if(ispalindrome(i, j, s))
                {
                    int count = 1 + dp[j + 1];
                    mini = min(mini, count);
                }
            }
            dp[i] = mini;
        }
        return dp[0] - 1;
    }
