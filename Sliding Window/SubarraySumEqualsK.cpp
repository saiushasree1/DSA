int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        m[0]=1;
        int tot=0,count=0;
        for(int i=0;i<nums.size();i++){
            count+=nums[i];
            tot+=m[count-k];
            m[count]++;
        }
        return tot;
    }
https://leetcode.com/problems/subarray-sum-equals-k/
