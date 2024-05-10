vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++){
            if(i%2){
                v[i]=v[i-1]+1;
            }
            else{
                int num=i,ans=0;
                while(num>0){
                    ans+=(num%2);
                    num=num/2;
                }
                v[i]=ans;
            }
        }
        return v;
    }
https://leetcode.com/problems/counting-bits/
