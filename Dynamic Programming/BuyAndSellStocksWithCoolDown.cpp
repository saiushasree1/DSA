int solve(vector<vector<int>> &dp,vector<int> &prices,int idx,int b){
        if(idx>=prices.size()) return 0;
        if(dp[idx][b]!=-1){
            return dp[idx][b];
        }
        
        int prof;
        if(b){
            prof=max(-prices[idx]+solve(dp,prices,idx+1,0),solve(dp,prices,idx+1,1));
            
        }
        else{
            prof=max(prices[idx]+solve(dp,prices,idx+2,1),solve(dp,prices,idx+1,0));
        }
        return dp[idx][b]=prof;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return solve(dp,prices,0,1);
    }
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/
