int firstElement(int n) {
        // code here
        int ans=0;
        long long mod=1e9+7;
        long long f=1,s=0;
        for(int i=1;i<n;i++){
            long long temp=f%mod;
            f=(s+f)%mod;
            s=temp;
        }
        return f%mod;
    }
https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1
