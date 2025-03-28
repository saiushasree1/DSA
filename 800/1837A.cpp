#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
         if(x%k!=0 || k>x) cout<<1<<endl<<x<<endl;
         else{
           cout<<2<<endl<<(x/k - 1)*k+1<<" "<<k-1<<endl;
         }
        
    }
    return 0;
}
https://codeforces.com/problemset/problem/1837/A
