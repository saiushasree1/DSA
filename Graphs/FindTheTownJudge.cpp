int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v(n+1,0),a(n+1,0);
        int m=1,ma=0;
        for(int i=0;i<trust.size();i++){
            v[trust[i][1]]++;
            a[trust[i][0]]++;
            
            if(v[trust[i][1]]>ma){
                ma=v[trust[i][1]];
                m=trust[i][1];
            }
        }
        if(ma==n-1){
            if(a[m]==0) return m;
        }
        return -1;
    }
https://leetcode.com/problems/find-the-town-judge/description/
