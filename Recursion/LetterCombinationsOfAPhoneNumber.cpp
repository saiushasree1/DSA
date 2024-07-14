vector<string> solve(string digits,int index,vector<string> &ans,string mapping[]){
        if(digits.size()==index) return ans;
        vector<string> ansnext;
        for(int i=0;i<mapping[digits[index]-'0'].size();i++){
            int n=ans.size();
            for(int j=0;j<n;j++){
                ansnext.push_back(ans[j]+mapping[digits[index]-'0'][i]);
            }
        }
        return solve(digits,index+1,ansnext,mapping);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        int index=0;
        ans.push_back("");
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        return solve(digits,index,ans,mapping);
    }
https://leetcode.com/problems/letter-combinations-of-a-phone-number/
