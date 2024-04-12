vector<int> getRow(int ri) {
        if(ri==0) return {1};
        vector<int> prev(ri+1,0);
        vector<int> curr(ri+1,0);
        prev[0]=1;prev[1]=1;
        if(ri==1) return prev;
        for(int i=1;i<ri;i++){
            curr[0]=1;
            curr[i+1]=1;
            for(int j=1;j<=i;j++){
                curr[j]=prev[j]+prev[j-1];
            }
            prev=curr;
        }
        return curr;
    }
