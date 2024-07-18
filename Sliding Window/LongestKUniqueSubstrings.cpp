int longestKSubstr(string s, int k) {
    // your code here
        vector<int> v(26,0);
        int n=s.size();
        int c=0;
        int l=0;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]-'a']==0){
                c++;
            }
            v[s[i]-'a']++;
            while(c>k){
                v[s[l]-'a']--;
                if(v[s[l]-'a']==0) c--;
                l++;
            }
            if(c==k){
                maxlen=max(maxlen,i-l+1);
            }
        }
        if(maxlen==0) return -1;
        else return maxlen;
    }
https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
