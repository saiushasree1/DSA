#include<bits/stdc++.h>
string postfixToPrefix(string s) {
    // Write Your Code Here
    int n=s.length();
    stack<string> p;
    for(int i=0;i<n;i++){
        if(s[i]!='+' && s[i]!='-' && s[i]!='/' && s[i]!='*' && s[i]!='^'){
			string s3="";
			s3+=s[i];
			p.push(s3);
		}
        else{
            string s1,s2;
            s2=p.top();
            p.pop();
            s1=p.top();
            p.pop();
            s1=s[i]+s1+s2;
            p.push(s1);
        }
    }
    return p.top();
}