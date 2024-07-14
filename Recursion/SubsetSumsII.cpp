void rec(vector<vector<int>> &ans,vector<int> temp,int ind,vector<int> &nums){
            ans.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            rec(ans,temp,i+1,nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        rec(ans,{},0,nums);
        return ans;
    }
https://leetcode.com/problems/subsets-ii/
