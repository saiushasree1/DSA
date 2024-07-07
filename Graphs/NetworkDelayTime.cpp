int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> v(n+1);
        for(auto i:times){
            v[i[0]].push_back({i[1],i[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        vector<int> time(n+1,1e9);
        time[k]=0;
        q.push({0,k});
        while(!q.empty()){
            auto i=q.top();
            q.pop();
            if(time[i.second]!=i.first) continue;
            for(auto x:v[i.second]){
                if(time[x.first]>x.second+i.first){
                    time[x.first]=x.second+i.first;
                    q.push({time[x.first],x.first});
                }
            }
        }
        bool f=false;
        int ans=INT_MIN;
        for(int i=1;i<n+1;i++){
            if(time[i]==1e9){
                f=true;
                break;
            }
            ans=max(ans,time[i]);
        }
        if(f) return -1;
        else return ans;
    }
https://leetcode.com/problems/network-delay-time/
