int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<nums.size();i++){
            if(q.size()>=k && q.top()>nums[i]){
                continue;
            }
            q.push(nums[i]);
            while(q.size()>k) q.pop();
        }
        return q.top();
    }
https://leetcode.com/problems/kth-largest-element-in-an-array/
