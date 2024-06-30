int rec(vector<int>& days, vector<int>& costs,vector<int> &dp,int n){
        if(n==days.size()){
            return 0;
        }
        if(dp[n]!=-1) return dp[n];
        int o1=costs[0]+rec(days,costs,dp,n+1);
        int i;
        for(i=n;i<days.size() && days[i]<days[n]+7;i++);
        int o2=costs[1]+rec(days,costs,dp,i);
        for(i=n;i<days.size() && days[i]<days[n]+30;i++);
        int o3=costs[2]+rec(days,costs,dp,i);
        return dp[n]=min({o1,o2,o3});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return rec(days,costs,dp,0);
    }
https://leetcode.com/problems/minimum-cost-for-tickets/?envType=problem-list-v2&envId=r6dsicy5
