void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) z++;
            else if(nums[i]==1) o++;
            else t++;
        }
        int i=0;
        while(z>0){
            nums[i]=0;
            z--;
            i++;
        }
        while(o>0){
            nums[i]=1;
            o--;
            i++;
        }
        while(t>0){
            nums[i]=2;
            t--;
            i++;
        }
    }
https://leetcode.com/problems/sort-colors/description/
