string findOrder(string dict[], int N, int k) {
        //code here
        vector<vector<int>> v(k);
        vector<int> p(k,0);
        for(int i=0;i<N-1;i++){
            int l=min(dict[i].length(),dict[i+1].length());
            for(int j=0;j<l;j++){
                if(dict[i][j]!=dict[i+1][j]){
                    v[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                    p[dict[i+1][j]-'a']++;
                    break;
                }
            }
        }
        queue<int> q;
        for(int i=0;i<k;i++){
            if(p[i]==0) q.push(i);
        }
        string s;
        while(!q.empty()){
            int x=q.front();
            s.push_back(char(x+'a'));
            q.pop();
            for(auto i:v[x]){
                p[i]--;
                if(p[i]==0) q.push(i);
            }
        }
        if(s.length()!=k) return "";
        return s;
    }
https://www.geeksforgeeks.org/problems/alien-dictionary/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
