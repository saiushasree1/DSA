#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      int cnt=0;
      for(int i=n-2;i>=0;i--){
        if((a[i+1]==0)){
          cnt=-1;
          break;
        }
        else if(a[i]>=a[i+1]){
          while(a[i]>=a[i+1]){
            a[i]=a[i]/2;
            cnt++;
          }
        }
      }
      cout<<cnt<<endl;
    }
    return 0;
}
https://codeforces.com/problemset/problem/1675/B
