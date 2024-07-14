void rec(vector<int> &nums,vector<vector<int>> &ans,int i){
        if(i==nums.size()) return;
        int n=ans.size();
        for(int j=0;j<n;j++){
            ans[j].push_back(nums[i]);
            ans.push_back(ans[j]);
            ans[j].pop_back();
        }
        rec(nums,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        rec(nums,ans,0);
        return ans;
    }
https://leetcode.com/problems/subsets/
