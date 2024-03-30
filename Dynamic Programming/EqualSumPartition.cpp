class Solution{
public:
    int rec(int n,int s,int arr[],vector<vector<int>> &si){
        if(s==0) return 1;
        if(n==-1) return 0;
        if(si[n][s]!=-1){
            return si[n][s];
        }
        if(arr[n]<=s){
            
            return si[n][s]=max(rec(n-1,s-arr[n],arr,si),rec(n-1,s,arr,si));
        }
        else{
            return si[n][s]=rec(n-1,s,arr,si);
        }
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        vector<vector<int>> dp(N+1,vector<int>(sum/2 +1,-1));
        if(sum%2) return 0;
        else return rec(N-1,sum/2,arr,dp);
    }
};
