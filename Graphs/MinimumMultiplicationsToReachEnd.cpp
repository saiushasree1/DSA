int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int mod=1e5;
        vector<int> v(100000,1e9);
        queue<pair<int,int>> q;
        v[start]=0;
        q.push({0,start});
        if(start==end) return 0;
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            for(int i=0;i<arr.size();i++){
                int c=(x.second*arr[i])%mod;
                if(v[c]>x.first+1){
                    v[c]=x.first+1;
                    if(c==end) return x.first+1;
                    q.push({v[c],c});
                }
            }
        }
        return -1;
        
    }
https://www.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1
