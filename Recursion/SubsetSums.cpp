void rec(vector<int> &ans,int ind,vector<int> &arr){
        if(arr.size()==ind) return;
        int n=ans.size();
        for(int i=0;i<n;i++){
            ans.push_back(ans[i]+arr[ind]);
        }
        rec(ans,ind+1,arr);
        return;
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        // Write Your Code here
        vector<int> ans;
        ans.push_back(0);
        rec(ans,0,arr);
        return ans;
    }
https://www.geeksforgeeks.org/problems/subset-sums2234/1
