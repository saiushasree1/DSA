vector<int> findMissing(int a[], int b[], int n, int m) 
	{   
	    vector<int> s;
	    unordered_set<int> mi;
	    for(int i=0;i<m;i++){
            mi.insert(b[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(mi.find(a[i])==mi.end()){
	            s.push_back(a[i]);
	        }
	    }
	    return s;
	} 
https://www.geeksforgeeks.org/problems/in-first-but-second5423/1
