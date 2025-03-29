#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int m1=0,p1=0;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==-1) m1++;
        else p1++;
      }
      if(p1>=m1){
        if(m1%2==0) cout<<0<<endl;
        else cout<<1<<endl;
      }
      else{
        int x=m1-p1;
        if(x%2==1){
          if((p1+x/2)%2==1) cout<<x/2 + 2<<endl;
          else cout<<x/2 + 1<<endl;
        }
        else{
          if((p1+x/2)%2==1) cout<<x/2 +1<<endl;
          else cout<<x/2<<endl;
        }
      }
    }
    return 0;
}

https://codeforces.com/problemset/problem/1834/A
