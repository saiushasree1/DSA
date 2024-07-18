int longestOnes(vector<int>& nums, int k) {
        int z=0;
        int st=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            while(z>k){
                if(nums[st]==0){
                    z--;
                }
                st++;
            }
            maxlen=max(maxlen,i-st+1);
        }
        return maxlen;
    }
https://leetcode.com/problems/max-consecutive-ones-iii/
