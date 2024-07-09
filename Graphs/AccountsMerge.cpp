int findparent(vector<int> &parent,int i){
        if(parent[i]==i) return i;
        return parent[i]=findparent(parent,parent[i]);
    }
    void unionset(vector<int> &parent,int i,int j){
        int x=findparent(parent,i);
        int y=findparent(parent,j);
        if(x==y) return;
        parent[x]=y;
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        vector<int> parent(n,0);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        unordered_map<string,int> m;
        for(int i=0;i<accounts.size();i++){
            for(int j=1;j<accounts[i].size();j++){
                if(m.find(accounts[i][j])!=m.end()){
                    unionset(parent,i,m[accounts[i][j]]);
                }
                else m[accounts[i][j]]=i;
            }
        }
        vector<vector<string>> v(n);
        for(auto [i,j]:m){
            v[findparent(parent,j)].push_back(i);
        }
        int c=0;
        for(int i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());

        }
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            if(v[i].size()!=0){
                vector<string> temp;
                temp.push_back(accounts[i][0]);
                for(auto j:v[i]){
                    temp.push_back(j);
                }
                ans.push_back(temp);

            }
        }
        return ans;
    }
https://leetcode.com/problems/accounts-merge/
