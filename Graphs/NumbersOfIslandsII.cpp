#include<bits/stdc++.h>

int findparent(vector<int> &parent,int i){
	if(parent[i]==i) return i;
	return findparent(parent,parent[i]);
}
void unionset(vector<int> &parent,int i,int j){
	int n=findparent(parent,i);
	int m=findparent(parent,j);
	if(n==m){
		return;
	}
	parent[m]=n;
}
vector<int> numOfIslandsII(int n, int m, vector<vector<int>> &q){
	// Write your code here.
	map<pair<int,int>,int> x;
	int len=q.size();
	vector<int> parent(len,0);
	for(int i=0;i<len;i++){
		parent[i]=i;
	} 
	vector<int> ans;
	for(int i=0;i<q.size();i++){
		if(x.find({q[i][0]+1,q[i][1]})!=x.end()){
			unionset(parent,x[{q[i][0]+1,q[i][1]}],i);
		}
		if(x.find({q[i][0],q[i][1]+1})!=x.end()){
			unionset(parent,x[{q[i][0],q[i][1]+1}],i);
		}
		if(x.find({q[i][0]-1,q[i][1]})!=x.end()){
			unionset(parent,x[{q[i][0]-1,q[i][1]}],i);
		}
		if(x.find({q[i][0],q[i][1]-1})!=x.end()){
			unionset(parent,x[{q[i][0],q[i][1]-1}],i);
		}
		x[{q[i][0],q[i][1]}]=i;
		set<int> s;
		for(int j=0;j<=i;j++){
			s.insert(findparent(parent,j));
		}
		ans.push_back(s.size());
	}
	return ans;
}
https://www.naukri.com/code360/problems/number-of-islands-ii_1266048?leftPanelTabValue=SUBMISSION
