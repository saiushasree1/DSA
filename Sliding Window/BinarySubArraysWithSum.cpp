int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> m;
        int tot=0,curr_sum=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            curr_sum+=nums[i];
            if(curr_sum>=goal){
                tot+=m[curr_sum-goal];
            }
            m[curr_sum]++;
        }
        return tot;
    }
https://leetcode.com/problems/binary-subarrays-with-sum/
