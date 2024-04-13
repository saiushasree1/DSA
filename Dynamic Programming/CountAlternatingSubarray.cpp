long long countAlternatingSubarrays(vector<int>& nums) {
        int n=nums.size();
        long long dp;
        dp=0;
        int l=0;
        for(int i=2;i<n+1;i++){
            if(nums[i-1]!=nums[i-2]){
                l++;
                dp=dp+l;
            }
            else{
                l=0;
            }
        }
        return dp+n;
    }
