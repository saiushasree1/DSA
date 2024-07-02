bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> v(n,0);
        vector<vector<int>> g(n);
        for(int i=0;i<pre.size();i++){
            v[pre[i][0]]++;
            g[pre[i][1]].push_back(pre[i][0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(v[i]==0) q.push(i);
        }
        int c=0;
        while(!q.empty()){
            int x=q.front();
            c++;
            q.pop();
            for(auto i:g[x]){
                v[i]--;
                if(v[i]==0) q.push(i);
            }
        }
        if(c!=n) return false;
        else return true;
    }
https://leetcode.com/problems/course-schedule/
