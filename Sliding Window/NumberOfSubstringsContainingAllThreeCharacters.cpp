int numberOfSubstrings(string s) {
        int count=0;
        int a=-1,b=-1,c=-1;
        int l=0,r=0;
        while(r<s.size()){
            if(s[r]=='a'){
                a=r;
            }
            else if(s[r]=='b'){
                b=r;
            }
            else if(s[r]=='c'){
                c=r;
            }
            if(a>=l && b>=l &&c>=l){
                count+=s.size()-r;
                while(l<min({a,b,c}) && l<r){
                    l++;
                    count+=s.size()-r;
                }
                l++;
            }
            r++;
        }
        return count;
    }
https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
