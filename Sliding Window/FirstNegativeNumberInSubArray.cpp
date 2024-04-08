vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) {
            stack<long long> s;long long idx=0;
            for(int i=n-1;i>=n-k;i--){
                if(a[i]<0){
                    idx=i;
                }
            }
            if(idx==0 && k<n){
                s.push(0);
            }
            else{
                if(a[idx]>0){
                    s.push(0);
                }
                else s.push(a[idx]);
            }
            for(int i=n-k-1;i>=0;i--){
                if(a[i]<0){
                    s.push(a[i]);
                    idx=i;
                }
                else if(idx<=i+k-1 && idx>=i && a[idx]<0){
                    s.push(a[idx]);
                }
                else{
                    s.push(0);
                }
            }
            vector<long long> v;
            while(!s.empty()){
                v.push_back(s.top());
                s.pop();
            }
            return v;                                   
 }
