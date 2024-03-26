#include<bits/stdc++.h>

string prefixToInfixConversion(string &s){
	// Write your code here.
	int n=s.length();
	stack<string> p;
	for(int i=n-1;i>=0;i--){
		if(s[i]!='+' && s[i]!='-' && s[i]!='/' && s[i]!='*' && s[i]!='^'){
			string s3="";
			s3+=s[i];
			p.push(s3);
		}
		else{
			string s1,s2;
			s1=p.top();
			p.pop();
			s2=p.top();
			p.pop();
			s1="("+s1+s[i]+s2+")";
			p.push(s1);
		}
	}
	return p.top();
}
