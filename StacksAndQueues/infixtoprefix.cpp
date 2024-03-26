#include<bits/stdc++.h>
int prio(char x){
	if(x=='('){
		return 1;
	}
	else if(x=='+' || x=='-'){
		return 2;
	}
	else if(x=='/'||x=='*'){
		return 3;
	}
	else if(x=='^'){
		return 4;
	}
	else{
		return -1;
	}
}
string prefixToInfixConversion(string &s){
	// Write your code here.
	int n=s.length();
	string ans;
	stack<char> p;
	for(int i=0;i<n;i++){
		if(!prio(s[i])){
			ans+=s[i];
		}
		else if(s[i]=='('){
			p.push(s[i]);
		}
		else if(s[i]==')'){
			while(!p.top()=='(' ){
				ans+=p.top();
				p.pop();
			}
			p.pop();
		}
		else{
			while(!p.empty() && prio(p.top())>=prio(s[i])){
				ans+=p.top();
				p.pop();
			}
			p.push(s[i]);
		}
	}
	while(!p.empty()){
		ans+=p.top();
		p.pop();
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
