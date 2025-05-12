#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        bool oo=false;
        bool oe=false;
        int gc;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]%2) oo=true;
          else oe=true;
          if(i==0) gc=a[i];
          else gc=__gcd(a[i],gc);
        }
        if(gc>2) cout<<"No"<<endl;
        else if(oe && oo && gc==1){
          cout<<"Yes"<<endl;
        }
        else{
          int x=INT_MAX;
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              x=min(__gcd(a[i],a[j]),x);
            }
          }
          if(x<=2) cout<<"Yes"<<endl;
          else cout<<"No"<<endl;
        }
    }
    return 0;
}

https://codeforces.com/problemset/problem/1789/A
