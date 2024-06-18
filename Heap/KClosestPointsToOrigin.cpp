vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        priority_queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<p.size();i++){
            q.push({p[i][0]*p[i][0]+p[i][1]*p[i][1],{p[i][0],p[i][1]}});
            if(q.size()>k) q.pop();
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back({q.top().second.first,q.top().second.second});
            q.pop();
        }
        return ans;
    }
https://leetcode.com/problems/k-closest-points-to-origin/
