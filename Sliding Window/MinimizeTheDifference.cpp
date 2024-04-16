int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int> maxi(n,0);
        vector<int> mini(n,0);
        maxi[n-1]=arr[n-1];
        mini[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            maxi[i]=max(arr[i],maxi[i+1]);
            mini[i]=min(arr[i],mini[i+1]);
        }
        int maxpre=arr[0];
        int minpre=arr[0];
        int ans=maxi[k]-mini[k];
        for(int i=1;i<=n-k-1;i++){
            ans=min(ans,max(maxpre,maxi[i+k])-min(minpre,mini[i+k]));
            maxpre=max(maxpre,arr[i]);
            minpre=min(minpre,arr[i]);
        }
        ans=min(ans,maxpre-minpre);
        return ans;
    }
https://www.geeksforgeeks.org/problems/minimize-the-difference/1
