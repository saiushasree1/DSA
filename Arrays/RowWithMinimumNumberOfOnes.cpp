 int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int mini=0,mi=INT_MAX;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                c+=a[i][j];
            }
            if(mi>c){
                mi=c;
                mini=i;
            }
        }
        return mini+1;
    }
https://www.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1
