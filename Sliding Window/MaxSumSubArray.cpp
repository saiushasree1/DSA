long maximumSumSubarray(int k, vector<int> &a , int n){
        // code here 
        long ans=0,tans=0;
        for(int i=0;i<k;i++){
            tans+=a[i];
        }
        ans=tans;
        for(int i=k;i<n;i++){
            tans=tans-a[i-k]+a[i];
            ans=max(ans,tans);

        }
        return ans;
    }
