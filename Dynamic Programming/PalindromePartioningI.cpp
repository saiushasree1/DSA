bool ispal(string s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else return false;
    }
    return true;
   }
   void rec(string s,vector<vector<string>> &v,vector<string> d){
    if(s.length()==0){
        v.push_back(d);
        return;
    }
    for(int i=0;i<s.length();i++){
        string o=s.substr(0,i+1);
        if(ispal(o)){
            d.push_back(o);
            rec(s.substr(i+1),v,d);
            d.pop_back();
        }
    }
   }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> a;
        rec(s,a,{});
        return a;
    }
https://leetcode.com/problems/palindrome-partitioning/description/
