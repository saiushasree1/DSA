void rec(vector<string> &ans,string a,int x,int y,vector<vector<int>> &m,int n){
        if(x==n-1 && y==n-1){
            ans.push_back(a);
            return;
        }
        if(x<n-1 && m[x+1][y]==1){
            m[x+1][y]=0;
            a.push_back('D');
            rec(ans,a,x+1,y,m,n);
            a.pop_back();
            m[x+1][y]=1;
        }
        if(y<n-1 && m[x][y+1]==1){
            m[x][y+1]=0;
            a.push_back('R');
            rec(ans,a,x,y+1,m,n);
            a.pop_back();
            m[x][y+1]=1;
        }
        if(x>0 && m[x-1][y]==1){
            m[x-1][y]=0;
            a.push_back('U');
            rec(ans,a,x-1,y,m,n);
            a.pop_back();
            m[x-1][y]=1;
        }
        if(y>0 && m[x][y-1]==1){
            m[x][y-1]=0;
            a.push_back('L');
            rec(ans,a,x,y-1,m,n);
            a.pop_back();
            m[x][y-1]=1;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0) return ans;
        m[0][0]=0;
        rec(ans,"",0,0,m,n);
        return ans;
    }
https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
