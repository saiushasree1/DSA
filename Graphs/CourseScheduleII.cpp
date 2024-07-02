vector<int> findOrder(int n, vector<vector<int>>& pre) {
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
        vector<int> a;
        while(!q.empty()){
            int x=q.front();
            a.push_back(x);
            q.pop();
            for(auto i:g[x]){
                v[i]--;
                if(v[i]==0) q.push(i);
            }
        }
        if(a.size()!=n) return {};
        return a;
    }
https://leetcode.com/problems/course-schedule-ii/
