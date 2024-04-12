void rec(int o,int c,vector<string> &s,string st){
        if(o<0 ||c<0) return;
        if(o==0 && c==0){
            s.push_back(st);
            return;
        }
        if(c<o){
            return;
        }
        else if(o==c){
            rec(o-1,c,s,st+'(');
        }
        else{
            rec(o-1,c,s,st+'(');
            rec(o,c-1,s,st+')');
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        rec(n,n,s,"");
        return s;
    }
