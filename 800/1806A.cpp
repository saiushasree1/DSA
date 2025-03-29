#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b||c-a>d-b) cout<<"-1"<<endl;
        else{
          if(a>c){
            cout<<(a-c)+2*(d-b)<<endl;
          }
          else{
            cout<<c-a+max(0,(d-b-(c-a))*2)<<endl;
          }
        }
    }
    return 0;
}

https://codeforces.com/problemset/problem/1806/A
