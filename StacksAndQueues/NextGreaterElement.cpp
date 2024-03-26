class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> m;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!s.empty() && nums2[s.top()]<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;
            }
            else m[nums2[i]]=nums2[s.top()];
            s.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=m[nums1[i]];
        }
        return nums1;
    }
};
