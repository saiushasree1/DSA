bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxr=0;
        int i=0;
        int p=0;
        while(p<n-1){
            maxr=max(maxr,i+nums[i]);
            if(p==i){
                p=maxr;
            }
            if(p==i && maxr==i){
                return false;
            }
            i++;
        }
        return true;
    }
