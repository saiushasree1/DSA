vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        int n=nums.size();
        for(int i=0;i<k;i++){
            if(q.empty()){
            q.push_back(i);
            continue;
            }
            while(!q.empty() && nums[q.back()]<=nums[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        vector<int> v;
        v.push_back(nums[q.front()]);
        for(int i=k;i<n;i++){
            while(!q.empty() && (q.front()<=i-k)){
                q.pop_front();
            }
            while(!q.empty() && nums[q.back()]<=nums[i]){
                q.pop_back();
            }
            q.push_back(i);
            v.push_back(nums[q.front()]);
        } 
        
        return v;
    }
