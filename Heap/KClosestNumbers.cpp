vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> q;
        for(int i=0;i<k;i++){
            q.push({abs(x-arr[i]),arr[i]});
        }
        for(int i=k;i<arr.size();i++){
            if(q.top().first>abs(x-arr[i])){
                q.pop();
                q.push({abs(x-arr[i]),arr[i]});
            }
            else if(q.top().first==abs(x-arr[i])){
                if(q.top().second>arr[i]){
                    q.pop();
                    q.push({abs(x-arr[i]),arr[i]});
                }
            }

        }
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
https://leetcode.com/problems/find-k-closest-elements/
