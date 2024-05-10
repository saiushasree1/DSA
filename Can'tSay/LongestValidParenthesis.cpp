int longestValidParentheses(string s) {
        int n=s.length();
        int open=0,close=0,mx=0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                close++;
            }
            else open++;
            if(open==close){
                mx=max(mx,2*open);
            }
            else if(close>open){
                close=0;
                open=0;
            }
        }
        open=close=0;
        for(int i=n-1;i>0;i--){
            if(s[i]==')'){
                close++;
            }
            else open++;
            if(open==close){
                mx=max(mx,2*open);
            }
            else if(close<open){
                close=0;
                open=0;
            }
        }
        return mx;
    }
https://leetcode.com/problems/longest-valid-parentheses/
