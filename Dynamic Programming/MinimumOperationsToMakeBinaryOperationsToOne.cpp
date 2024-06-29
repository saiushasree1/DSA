int minOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1,0);
        v[0]=0;
        v[1]= nums[0]?0:1;
        for(int i=2;i<=n;i++){
            if(nums[i-1]==1){
                if(nums[i-2]==0){
                    v[i]=v[i-1]+1;
                }
                else v[i]=v[i-1];
            }
            else{
                if(nums[i-2]==1){
                    if(v[i-1]%2){
                        v[i]=v[i-1];
                    }
                    else v[i]=v[i-1]+1;
                }
                else{
                   v[i]=v[i-1]; 
                }
            }
        }
        return v[n];
    }
https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/
