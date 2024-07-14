int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int n=s.length();
        if(k>=n) return n;
        int l=0,r=0;
        int maxf=0;
        int ans=0;
        while(r<n){
            v[s[r]-'A']++;
            maxf=max(maxf,v[s[r]-'A']);
            if(r-l+1-maxf>k){
                v[s[l]-'A']--;
                l++;
            }
            else{
                ans=max(ans,r-l+1);
            }
            r++;
        }
        return ans;
    }
https://leetcode.com/problems/longest-repeating-character-replacement/
