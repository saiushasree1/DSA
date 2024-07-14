 bool rec(int x,int y,vector<vector<char>> &b,string w,int n,vector<vector<bool>> &visited){
            if(w.length()==n) return true;
            if(x<0||y<0||x>=b.size()||y>=b[0].size()||visited[x][y]==1||b[x][y]!=w[n]) return false;
            visited[x][y]=true;
            bool ans=rec(x+1,y,b,w,n+1,visited)||rec(x-1,y,b,w,n+1,visited)||rec(x,y+1,b,w,n+1,visited)||rec(x,y-1,b,w,n+1,visited);
            visited[x][y]=false;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        bool ans=false;
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(word[0]==board[i][j] && rec(i,j,board,word,0,visited)){
                    return true;
                }
            }
        }
        return false;
    }
https://leetcode.com/problems/word-search/
