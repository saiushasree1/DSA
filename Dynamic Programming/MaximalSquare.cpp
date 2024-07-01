int maximalSquare(vector<vector<char>>& matrix) {
        int ma=0;
        vector<vector<int>> m(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++){m[i][0]=matrix[i][0]-'0';
        ma=max(ma,m[i][0]);
        }
        for(int i=0;i<matrix[0].size();i++){m[0][i]=matrix[0][i]-'0';
        ma=max(ma,m[0][i]);
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if(matrix[i][j]=='1'){
                    m[i][j]=1+min({m[i-1][j-1],m[i-1][j],m[i][j-1]});
                    ma=max(ma,m[i][j]);
                }
            }
        }
        return ma*ma;
    }
https://leetcode.com/problems/maximal-square/
