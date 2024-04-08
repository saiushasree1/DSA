int search(string pat, string txt) {
	    // code here
	    int cnt=0;
	    vector<int> v(26,0),c(26,0);
	    bool last=false;
	    int l=pat.length();
	    for(int i=0;i<l;i++){
	        v[pat[i]-'a']++;
	        v[txt[i]-'a']--;
	    }
	    if(v==c){
	        cnt++;
	        last=true;
	    }     
	    for(int i=l;i<txt.length();i++){
	        if(txt[i-l]==txt[i]){
	            if(last) cnt++;
	            continue;
	        }
	        v[txt[i-l]-'a']++;
	        v[txt[i]-'a']--;
	        if(v==c){
	            cnt++;
	            last=true;
	        }   
	        else last=false;
	    }
	    return cnt;
	}
