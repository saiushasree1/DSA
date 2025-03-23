#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int x,y;
        bool alsort=true;
        cin>>x;
        for(int i=0;i<n-1;i++){
          cin>>y;
          if(x>y){
            alsort=false;
          }
          else{
            x=y;
          }
        }
        if(alsort) cout<<"YES"<<endl;
        else if(k==1 && n>1 ) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1903/A
