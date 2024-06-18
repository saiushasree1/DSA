struct Comp {
    bool operator()(pair<int, int> x, pair<int, int> y) {
        if (x.first == y.first) {
            return x.second < y.second; 
        }
        return x.first > y.first; 
    }
};
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,Comp> q;
        for(auto i:m){
            q.push({i.second,i.first});
        }
        vector<int> ans;
        while(!q.empty()){
            auto x=q.top();
            while(x.first){
                ans.push_back(x.second);
                x.first--;
            }
            q.pop();
        }
        return ans;
    }
};
https://leetcode.com/problems/sort-array-by-increasing-frequency/
