#include<bits/stdc++.h>
int priori(char x) {
  if (x == '(')
    return 0;
  else if (x == '+' || x == '-')
    return 1;
        else if(x=='/'||x=='*') return 2;
		else if(x=='^') return 3;
}
string infixToPostfix(string exp){
	// Write your code here
	int n=exp.length();
	string ans;
	stack<char> st;
	for(int i=0;i<n;i++){
		if(exp[i]!='+' && exp[i]!='-' && exp[i]!='*' && exp[i]!='/' && exp[i]!='^' && exp[i]!='(' && exp[i]!=')'){
			ans+=exp[i];
		}
		else if(exp[i]=='('){
			st.push(exp[i]);
		}
		else if(exp[i]==')'){
                        while (st.top() != '(') {
                          ans += st.top();
                          st.pop();
                        }
						st.pop();
        }
		else{
				while(!st.empty() && priori(st.top())>=priori(exp[i])){
					ans+=st.top();
					st.pop();
				}
				st.push(exp[i]);
		}

	}
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	return ans;
}