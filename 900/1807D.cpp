#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n];
        bool sum=true;
        bool all[n+2];
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]%2) sum=(!sum);
          all[i+1]=sum;
        }
        all[0]=true;
        all[n+1]=all[n];
        for(int i=0;i<q;i++){
          int l,r,k;
          cin>>l>>r>>k;
          if(all[l-1]==all[r]){
            if(((r-l+1)*k)%2==0){
              if(sum) cout<<"No"<<endl;
              else cout<<"Yes"<<endl;
            }
            else{
              if(!sum) cout<<"No"<<endl;
              else cout<<"Yes"<<endl;
            }
          }
          else{
            if(((r-l+1)*k)%2==0){
              if(!sum) cout<<"No"<<endl;
              else cout<<"Yes"<<endl;
            }
            else{
              if(sum) cout<<"No"<<endl;
              else cout<<"Yes"<<endl;
            }
          }
        }
    }
    return 0;
}
https://codeforces.com/problemset/problem/1807/D
