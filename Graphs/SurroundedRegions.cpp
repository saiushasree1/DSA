void solve(vector<vector<char>>& b) {
        int n=b.size();
        int m=b[0].size();
        vector<vector<char>> c=b;
        stack<pair<int,int>> s;
        for(int i=0;i<m;i++){
            if(b[0][i]=='O'){
                s.push({0,i});

            }
            if(b[n-1][i]=='O'){
                s.push({n-1,i});
            }
        }
        for(int i=0;i<n;i++){
            if(b[i][0]=='O'){
                s.push({i,0});
            }
            if(b[i][m-1]=='O'){
                s.push({i,m-1});
            }
        }
        while(!s.empty()){
            int i=s.top().first;
            int j=s.top().second;
            s.pop();
            c[i][j]='X';
            if(i+1<n && c[i+1][j]=='O'){
                s.push({i+1,j});
            }
            if(i-1>=0 && c[i-1][j]=='O'){
                s.push({i-1,j});
            }
            if(j+1<m && c[i][j+1]=='O'){
                s.push({i,j+1});
            }
            if(j-1>=0 && c[i][j-1]=='O'){
                s.push({i,j-1});
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='O' && b[i][j]==c[i][j]) b[i][j]='X';
            }
        }
    }
https://leetcode.com/problems/surrounded-regions/
