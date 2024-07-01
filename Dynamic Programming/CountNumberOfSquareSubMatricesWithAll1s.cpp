int countSquares(vector<vector<int>>& m) {
        int sum=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(i!=0 && j!=0 && m[i][j]==1){
                    m[i][j]=1+min({m[i-1][j-1],m[i-1][j],m[i][j-1]});
                }
                sum+=m[i][j];
            }
        }
        return sum;
    }
https://leetcode.com/problems/count-square-submatrices-with-all-ones/
